#include <stdio.h>
#include <string.h>
#include <malloc.h>

//#define MAX_SLOT 100

struct Student
{
    char name[50], NIM[20], menu, grade[2], major[50], task[5], midTerm[5], finalTerm[5], total[5], score[5];

    //float gpa;
} student;
float score, task, midTerm, finalTerm;

void *createNewNodeA (char *NIM, char *name, char *major)
{
    struct newNode *calonHead = malloc(sizeof(student));
    // FILE *fp = fopen("dataMahasiswa.txt", "a");
    // fscanf(fp, "%s#%s#%s\r\n", NIM, name, major);
//    fprintf(fp, "%s#%s#%s\r\n", NIM, name, major);
    
    strcpy (calonHead -> NIM = NIM);
    strcpy (calonHead ->name = name);
    strcpy (calonHead -> jurusan = major);
    //Student *head;
    calonHead->kiri = NULL;
    calonHead->kanan = head;
    if (head != NULL) {
      head->kiri = calonHead;
    }
    head = calonHead;



}

void print()
{
  struct *student temp = head;
  while (temp != NULL)
  {
      print....
      temp = temp->kanan;
  }
}

fclose(fp);
void masukkan(int current_index)
{
    struct Student student;
    printf(" Insert Student Information\n", current_index);
    printf("NIM    : ");
    scanf("%s", student.NIM);
    fflush(stdin);
    printf("nama   : ");
    scanf("%[^\t\n]", student.name);
    fflush(stdin);
    printf("jurusan: ");
    scanf("%s", student.major);

    FILE *fp = fopen("dataMahasiswa.txt", "a");
    fprintf(fp, "%s#%s#%s\r\n", student.NIM, student.name, student.major);
    fclose(fp);

    int task, midTerm, finalTerm;
    printf("Insert Student Score: \n- - - - - - - - - -\t\n");
    printf("Task        :  ");
    scanf("%d", &task);
    fflush(stdin);
    printf("Mid Term    : ");
    scanf("%d", &midTerm);
    fflush(stdin);
    printf("Final Term  : ");
    scanf("%d", &finalTerm);
    fflush(stdin);

    float score = ("%f + %f + %f", 0.3 * task + 0.3 * midTerm + 0.4 * finalTerm);
    printf("Final Score : %.2f\n", score);
    char *grade;
    if (score >= 95 && score <= 100)
    {
        grade = "A+";
    }
    else if (score >= 85 && score <= 94.99)
    {
        grade = "A";
    }
    else if (score >= 80 && score <= 84.99)
    {
        grade = "A-";
    }
    else if (score >= 75 && score <= 79.99)
    {
        grade = "B+";
    }
    else if (score >= 70 && score <= 74.99)
    {
        grade = "B";
    }
    else if (score >= 65 && score <= 69.99)
    {
        grade = "C";
    }
    else if (score >= 60 && score <= 64.99)
    {
        grade = "C-";
    }
    else if (score >= 50 && score <= 59.99)
    {
        grade = "D";
    }
    else
    {
        grade = "F";
    }
    printf("Grade       : %s\n", grade);

    FILE *fn = fopen("nilaiMahasiswa.txt", "a");
    fprintf(fn, "%s#%d#%d#%d#%.*f#%s\r\n", student.NIM, task, midTerm, finalTerm, 1, score, grade);
    fclose(fn);
}

int main(int current_index)
{
    int i;
    int menu;

    current_index = 35;
    do
    {
        printf("Welcome to simple student database (%d/100)\n", current_index);

        printf("1. Input New Student\n2. Show All Students\n3. Show All Scores\n0. Exit\nChoose : ");
        scanf("%d", &menu);
        // fflush(stdin);
        if (menu == 1)
        {
            masukkan(++current_index);
            printf("Inserting data\n\nNew students added\nPress any key to continue\n");
        }
        /*if (current_index >= MAX_SLOT)
        {
            printf("Database FULL");
            break;
        }
        */

        if (menu == 2)
        {
            struct Student newStud[100];
            int ke = 1;

            FILE *fp = fopen("dataMahasiswa.txt", "r");
            while (!feof(fp))
            {
                char name[50], NIM[20], menu, grade[2], major[50], task[5], midTerm[5], finalTerm[5], total[5], score[5];
                fscanf(fp, "%[^#]#%[^#]#%s", &NIM, &name, &major);
                createNewNodeA(NIM, name, major);
                //ke++;
            }
            fclose(fp);
            //FILE *fout=fopen()
            printf("\tList of Student Information\t\n");
            printf("-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- \n");
            printf("|No. |\t\tName\t\t|\tMajor\t |  NIM\t\t|\n");
            printf("-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- \n");
            for (int j = 1; j < ke; j++)
            {
                printf("|%-4d|%-25s |%-15s | %-10s\t|\t\n", j, newStud[j].name, newStud[j].major, newStud[j].NIM);
            }
            //}
/*
            FILE *fout = fopen("dataMahasiswa.txt","a+");
            for (int p = 36; p <= current_index; ++p)
            {
                printf("|%-4d|%-25s |%-15s | %-10s\t|\n", p, s[p].name, s[p].major, s[p].NIM);
                current_index++;
                break;
            }

            fclose(fout);
*/
        }

        if (menu == 3)
        {
            struct Student newStude[100];
            int punya = 1;
            printf("\t\t\tList Of Student Information\n");
            printf("-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --  \n");
            printf("|No. |\t\tNIM\t|TASK\t|Mid Term| Final Term| Total |Grade\t|\n");
            printf("-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --  \n");

            FILE *fin = fopen("nilaiMahasiswa.txt", "r");
            while (!feof(fin))
            {

                fscanf(fin, "%[^#]#%[^#]#%[^#]#%[^#]#%[^#]#%s", &newStude[punya].NIM, &newStude[punya].task, &newStude[punya].midTerm, &newStude[punya].finalTerm, &newStude[punya].total, &newStude[punya].grade);
                //s[i]= newStud2;
                punya++;
            }
            fclose(fin);

            for (int m = 0; m < punya; m++)
            {
                printf("|%d   |%-10s\t|%s\t | %s\t |%s\t\t |%s\t |%s\t|\n", m, newStude[m].NIM, newStude[m].task, newStude[m].midTerm, newStude[m].finalTerm, newStude[m].total, newStude[m].grade);
            }
/*
            for (int h = 36; h <= current_index; h++)
            {
                printf("|%d|%s |%s | %s|%s|%s|%c\n", h, s[h].NIM, s[h].task, s[h].midTerm, s[h].finalTerm, s[h].score, s[h].grade);
                current_index++;

                break;
            }
*/
        }
    } while (menu != 0);
    return 0;
}