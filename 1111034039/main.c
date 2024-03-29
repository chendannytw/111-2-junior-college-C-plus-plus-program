typedef struct student {

          unsigned int stuID;
          char name[20];
          int math,computer;
}STU;

建立一個結構請使用自行輸入3筆資料至該結構中，根據Problem 1寫入鏈結串列內容，並存入隨機檔之中。此時內容應該是根據學號排序過的結果。
存取隨機檔方式可修改以下程式碼。
可以合併以下兩個程式檔:


//存取隨機檔

#include <stdio.h>
#include <stdlib.h>

#include <string.h>

void blank(FILE *cfPtr);
void write(FILE *cfPtr);
void read(FILE *cfPtr);


typedef struct{
    unsigned int StuNum;  //4 bytes
    char Name[20];        //20 bytes
    int math, computer;   //16 bytes
    float average;        //4 bytes
    int rank;             //4 bytes
    
}stuData;                //total 48 bytes 


void bubble(stuData *studArr,int num);

int main(void){
    FILE *cfPtr;            // 建立檔案指標 
    blank(cfPtr);
    write(cfPtr);
    read(cfPtr);
}

void allocte(void)
{stuData *stuPtr;

stuPtr=malloc(sizeof(stuData));
	
stuPtr->StuNum=2;
stuPtr->Name="Danny";
stuPtr->math=99;
stuPtr->computer=89;
stuPtr->average=0;
stuPtr->rank=0;

free(stuPtr);

}

void blank(FILE *cfPtr){
    int i;
    if((cfPtr = fopen("accounts1.dat","wb"))==NULL){     //開啟檔案 
        puts("File could not be opened.");
    }
    else{
        stuData blankstudent = {0,"",0,0,0.0};

        for(i = 1 ; i <= 100 ; i++){
            fwrite(&blankstudent, sizeof(stuData),1,cfPtr);   //存取檔案
        }
    }
    fclose(cfPtr);                                            //關閉檔案 
}

void write(FILE *cfPtr){
    if((cfPtr = fopen("accounts1.dat","rb+")) == NULL){      //開啟檔案 
        puts("File could not be opened.");
    }
    else{
        stuData student = {0,"",0,0,0.0};

        printf("%s","Enter studentNum(1 to 100, 0 to end input) : ");   //存取檔案

        scanf("%d",&student.StuNum);

        while(student.StuNum != 0 ){
            printf("%s","\nEnter name ,math, computer : ");
            fscanf(stdin,"%19s%3d%3d",student.Name,&student.math,&student.computer);           
            student.average=(double)(student.math+student.computer)/2;
            fseek(cfPtr,(student.StuNum-1)*sizeof(stuData),SEEK_SET);
            fwrite(&student,sizeof(stuData),1,cfPtr);                    
            printf("%s","\nEnter student number : ");
            scanf("%d",&student.StuNum);
        }
        fclose(cfPtr);                                                //關閉檔案 
    }                        
}

void read(FILE *cfPtr){
    
    stuData stuArr[100];  //************************新增結構陣列 
    int i=0,j;
    if((cfPtr = fopen("accounts1.dat","rb")) == NULL){                  //開啟檔案
        puts("File could not be opened.");
    }
    else{
        printf("%-6s%-16s%-10s%-10s%-10s%-4s\n","Num","Name","math","computer","average","rank");

        while(!feof(cfPtr)){
            stuData student = {0,"",0,0,0.0};

            int result = fread(&student,sizeof(stuData),1,cfPtr);

            if(result != 0 && student.StuNum != 0 ){
                printf("%-6d%-16s%-10d%-10d%-10.2f\n",student.StuNum,student.Name,student.math,student.computer,student.average);
                stuArr[i].StuNum=student.StuNum;
                strcpy(stuArr[i].Name,student.Name);
                stuArr[i].math=student.math;
                stuArr[i].computer=student.computer;
                stuArr[i].average=student.average;
                i++;
            }
        }
        fclose(cfPtr);
    }
     printf("\n");
    
    for(j=0;j<i;++j)
        printf("%-6d%-16s%-10d%-10d%-10.2f\n",stuArr[j].StuNum,stuArr[j].Name,stuArr[j].math,stuArr[j].computer,stuArr[j].average);
    printf("\n");
    bubble(stuArr,i);
    
    //排序完成後，將名次放入結構陣列每一個學生的名次欄中
    for(j=0;j<i;++j)
        {stuArr[j].rank=j+1;
		printf("%-6d%-16s%-10d%-10d%-10.2f%-4d\n",stuArr[j].StuNum,stuArr[j].Name,stuArr[j].math,stuArr[j].computer,stuArr[j].average,stuArr[j].rank);
		} 
    
}

void bubble(stuData *studArr,int num)
{
    int pass, i, j;
    for (pass = 1; pass < num; ++pass) {

        // loop to control number of comparisons per pass ??
        for (i = 0; i < num - 1; ++i) {
            // compare adjacent elements and swap them if first?
        // element is greater than second element ? ? ? ? ??
            if (studArr[i].average < studArr[i + 1].average) {
                stuData temp;
                temp=studArr[i];
                studArr[i]=studArr[i+1];
                studArr[i+1]=temp;

            }
        }
    }
}









//存取鏈結串列

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// self-referential structure                       
struct listNode {                                      
   unsigned int StuNum;
   char name[20];
   int math, computer; // each listNode contains a character 
   struct listNode *nextPtr; // pointer to next node
}; 

typedef struct listNode ListNode; // synonym for struct listNode
typedef ListNode *ListNodePtr; // synonym for ListNode*

// prototypes
void insert(ListNodePtr *sPtr, unsigned int ID, char name[], int math, int computer);
char delete(ListNodePtr *sPtr, unsigned int value);
int isEmpty(ListNodePtr sPtr);
void printList(ListNodePtr currentPtr);
void instructions(void);

int main(void)
{ 
   ListNodePtr startPtr = NULL; // initially there are no nodes
   unsigned int StuID; // char entered by user
   char Sname[20]; 
   int mat, comp;

   instructions(); // display the menu
   printf("%s", "? ");
   unsigned int choice; // user's choice
   scanf("%u", &choice);

   // loop while user does not choose 3
   while (choice != 3) { 

      switch (choice) { 
         case 1:
            printf("%s", "Enter a student ID: ");
            scanf("\n%d", &StuID);
            printf("%s", "Enter a student Name: ");
            scanf("\n%s", Sname);
            printf("%s", "Enter math: ");
            scanf("\n%d", &mat);
            printf("%s", "Enter computer:");
            scanf("\n%d", &comp);
            insert(&startPtr, StuID,Sname,mat,comp); // insert item in list
            printList(startPtr);
            break;
         case 2: // delete an element
            // if list is not empty
            if (!isEmpty(startPtr)) { 
               printf("%s", "Enter student ID to be deleted: ");
               scanf("\n%u", &StuID);

               // if character is found, remove it
               if (delete(&startPtr, StuID)) { // remove item
                  printf("%u deleted.\n", StuID);
                  printList(startPtr);
               } 
               else {
                  printf("%d not found.\n\n", StuID);
               } 
            } 
            else {
               puts("List is empty.\n");
            } 

            break;
         default:
            puts("Invalid choice.\n");
            instructions();
            break;
      } // end switch

      printf("%s", "? ");
      scanf("%u", &choice);
   } 

   puts("End of run.");
} 

// display program instructions to user
void instructions(void)
{ 
   puts("Enter your choice:\n"
      "   1 to insert an element into the list.\n"
      "   2 to delete an element from the list.\n"
      "   3 to end.");
} 

// insert a new value into the list in sorted order
void insert(ListNodePtr *sPtr,unsigned int ID, char* na, int mat, int comp)
{ 
   ListNodePtr newPtr = malloc(sizeof(ListNode)); // create node

   if (newPtr != NULL) { // is space available
      newPtr->StuNum = ID; // place value in node
      strcpy(newPtr->name,na);
      newPtr->math=mat; 
	  newPtr->computer= comp;
      newPtr->nextPtr = NULL; // node does not link to another node

      ListNodePtr previousPtr = NULL;
      ListNodePtr currentPtr = *sPtr;

      // loop to find the correct location in the list       
      while (currentPtr != NULL && ID > currentPtr->StuNum) {
         previousPtr = currentPtr; // walk to ...               
         currentPtr = currentPtr->nextPtr; // ... next node 
      }                                          

      // insert new node at beginning of list
      if (previousPtr == NULL) { 
         newPtr->nextPtr = *sPtr;
         *sPtr = newPtr;
      } 
      else { // insert new node between previousPtr and currentPtr
         previousPtr->nextPtr = newPtr;
         newPtr->nextPtr = currentPtr;
      } 
   } 
   else {
      printf("%d not inserted. No memory available.\n", ID);
   } 
} 

// delete a list element
char delete(ListNodePtr *sPtr, unsigned int value)
{ 
   // delete first node if a match is found
   if (value == (*sPtr)->StuNum) { 
      ListNodePtr tempPtr = *sPtr; // hold onto node being removed
      *sPtr = (*sPtr)->nextPtr; // de-thread the node
      free(tempPtr); // free the de-threaded node
      return value;
   } 
   else { 
      ListNodePtr previousPtr = *sPtr;
      ListNodePtr currentPtr = (*sPtr)->nextPtr;

      // loop to find the correct location in the list
      while (currentPtr != NULL && currentPtr->StuNum != value) { 
         previousPtr = currentPtr; // walk to ...  
         currentPtr = currentPtr->nextPtr; // ... next node  
      } 

      // delete node at currentPtr
      if (currentPtr != NULL) { 
         ListNodePtr tempPtr = currentPtr;
         previousPtr->nextPtr = currentPtr->nextPtr;
         free(tempPtr);
         return value;
      } 
   } 

   return '\0';
} 

// return 1 if the list is empty, 0 otherwise
int isEmpty(ListNodePtr sPtr)
{ 
   return sPtr == NULL;
} 

// print the list
void printList(ListNodePtr currentPtr)
{ 
   // if list is empty
   if (isEmpty(currentPtr)) {
      puts("List is empty.\n");
   } 
   else { 
      puts("The list is:");

      // while not the end of the list
      while (currentPtr != NULL) { 
         printf("%d +", currentPtr->StuNum);
         printf("%s +", currentPtr->name);
         printf("%d +", currentPtr->math);
         printf("%d -->", currentPtr->computer);
         currentPtr = currentPtr->nextPtr;   
      } 

      puts("NULL\n");
   
