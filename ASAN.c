
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FULL_NAME_LENGTH    256
#define NICK_NAME_LENGTH    256
#define ID_LENGTH           16
#define SECTION_LENGTH      16
#define MAIL_LENGTH         256
#define BLOOD_GROUP_LENGTH  16
#define HOBBY_LENGTH        1024
#define FILE_NAME_LENGTH    26

typedef struct _credentials
{
    char FullName       [FULL_NAME_LENGTH];
    char NickName       [NICK_NAME_LENGTH];
    char ID             [ID_LENGTH];
    char TheorySection  [SECTION_LENGTH];
    char LabSection     [SECTION_LENGTH];
    char Mail           [MAIL_LENGTH];
    char BloodGroup     [BLOOD_GROUP_LENGTH];
    char Hobby          [HOBBY_LENGTH];
} Credentials;

void ScanCredentials(Credentials* cred);
void ScanCredentialsMember(char* member, int memberLength, const char* memberName, const char* example);
int ConfirmCredentialsCorrect(Credentials* cred);
int WriteCredentialsToFile(Credentials* cred);

int main(void)
{
    Credentials cred;
    ScanCredentials(&cred);
    while(!ConfirmCredentialsCorrect(&cred))
    {
        printf("[RETRY] Please re-enter the credentials:\n");
        ScanCredentials(&cred);
    }
    printf("[WRITING] Writing to a JSON file...\n");
    if(!WriteCredentialsToFile(&cred))
    {
        printf("[ERROR] Failed to write to file\n");
    }
    else printf("[SUCCESS] Task completed. Please upload the file as instructed.\n");
    printf("Press any key to exit...");
    getchar();
    return 0;
}

void ScanCredentials(Credentials* cred)
{
    ScanCredentialsMember(cred->FullName, FULL_NAME_LENGTH, "Full Name", "John Doe");
    ScanCredentialsMember(cred->NickName, NICK_NAME_LENGTH, "Nick Name", "John");
    ScanCredentialsMember(cred->ID, ID_LENGTH, "Complete ID", "2000410XX");
    ScanCredentialsMember(cred->TheorySection, SECTION_LENGTH, "Theory Section", "2");
    ScanCredentialsMember(cred->LabSection, SECTION_LENGTH, "Lab Section", "1A");
    ScanCredentialsMember(cred->Mail, MAIL_LENGTH, "Email", "mymail@vendor.com");
    ScanCredentialsMember(cred->BloodGroup, BLOOD_GROUP_LENGTH, "Blood Group", "AB+");
    ScanCredentialsMember(cred->Hobby, HOBBY_LENGTH, "Hobby", "Painting");
}

void ScanCredentialsMember(char* member, int memberLength, const char* memberName, const char* example)
{
    printf("[INPUT] Enter %s [e.g. %s]: ", memberName, example);
    fgets(member, memberLength, stdin);
    member[strcspn(member, "\n")] = 0;
}

int ConfirmCredentialsCorrect(Credentials* cred)
{
    printf("[VERIFICATION] Please confirm the following credentials: \n");
    printf("\tFull Name: %s\n", cred->FullName);
    printf("\tNick Name: %s\n", cred->NickName);
    printf("\tID: %s\n", cred->ID);
    printf("\tTheory Section: %s\n", cred->TheorySection);
    printf("\tLab Section: %s\n", cred->LabSection);
    printf("\tEmail: %s\n", cred->Mail);
    printf("\tBlood Group: %s\n", cred->BloodGroup);
    printf("\tHobby: %s\n", cred->Hobby);
    printf("[VERIFICATION] Enter 'y' (without quote) if the information is correct, otherwise 'n' (without quote). (y/n)?: ");
    char Confirmation = 'n';
    scanf("%c", &Confirmation);
    getchar();
    fflush(stdin);
    if(Confirmation == 'Y' || Confirmation == 'y')
    {
        return 1;
    }
    else return 0;
}

int WriteCredentialsToFile(Credentials* cred)
{
    char fileName[FILE_NAME_LENGTH];
    strcpy(fileName[FILE_NAME_LENGTH], cred->FullName);
    strcat(fileName[FILE_NAME_LENGTH], "main2.json");
    FILE* fp = fopen(fileName, "w+");
    if(fp)
    {
        fprintf(fp, "{ \"FullName: \" : \"%s\", \"NickName\" : \"%s\", \"ID\" : \"%s\", \"TSec\" : \"%s\", \"LSec\" : \"%s\", \"Mail\" : \"%s\", \"BloodGroup\" : \"%s\", \"Hobby\" : \"%s\" }",
            cred->FullName, cred->NickName, cred->ID, cred->TheorySection, cred->LabSection, cred->Mail, cred->BloodGroup, cred->Hobby);
        return !fclose(fp);
    }
    else return 0;
}
