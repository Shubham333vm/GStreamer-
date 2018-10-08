#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#define BUFSIZE 128
#define MAX_CHARS 128
#define N_NO_OF_LINES 10
char MY_TIME[50];
int value,value1;
char **new_line = NULL;

int parse_output(void) {

    //char cmd[100] = "cd /home/bitcomm-31/Gstreamer/Videos/";
       
    char *cmd = "cd /home/bitcomm-06/Gstreamer/Videos/Cam1 && ls -t";   
    char line[MAX_CHARS] = {0};
   
    int noOfLines = 0;
    int lineCount = 0;

    char buf[BUFSIZE];
    FILE *fp;
    int i;
    new_line = malloc(sizeof(char*) * N_NO_OF_LINES);
    noOfLines = N_NO_OF_LINES;
    if ((fp = popen(cmd, "r")) == NULL) {
        printf("Error opening pipe!\n");
        return -1;
    }
    while (fgets(buf, BUFSIZE, fp) != NULL) {
        // Do whatever you want here...
        //strcpy(arr[i],buf);
        if (lineCount >= noOfLines)
        {
            new_line = realloc(new_line, (sizeof(char*)*(noOfLines+N_NO_OF_LINES)));
            noOfLines += N_NO_OF_LINES;
        }
        new_line[lineCount] = strdup(buf);
       // printf("OUTPUT: %s", buf);
        lineCount++;
        //printf("OUTPUT: %s\n%s", buf,new_line[lineCount]);
    }

    if(pclose(fp))  {
      //  printf("Command not found or exited with error status\n");
        return -1;
    }
    for (i = 0; i < lineCount; ++i)
    {
        /* code */
       printf("Value through indexing %s", new_line[i]);
       // printf("Value through dereferencing%s", *new_line);
    }
   
   
    return 0;
}

void parse_output2(char *cmd2) {

    //char cmd4[200] ={};
 // strncpy(cmd4,*cmd,)
     //sprintf(cmd4,"%s",cmd2);
//printf("parse_output2 %s", cmd4);
  //  while(1)
   // {   
   // printf("cmd2 value=======%s\n",cmd2);
    //char *cmd = cmd2;   
    char line[MAX_CHARS] = {0};
   
    int noOfLines = 0;
    int lineCount = 0;

    char buf[BUFSIZE];
    FILE *fp;
    int i;
    new_line = malloc(sizeof(char*) * N_NO_OF_LINES);
    noOfLines = N_NO_OF_LINES;
    if ((fp = popen(cmd2, "r")) == NULL) {
        printf("Error opening pipe!\n");
        return 0;
    }
    while (fgets(buf, BUFSIZE, fp) != NULL) {
        // Do whatever you want here...
        //strcpy(arr[i],buf);
        if (lineCount >= noOfLines)
        {
            new_line = realloc(new_line, (sizeof(char*)*(noOfLines+N_NO_OF_LINES)));
            noOfLines += N_NO_OF_LINES;
        }
        new_line[lineCount] = strdup(buf);
       // printf("OUTPUT: %s", buf);
        lineCount++;
        //printf("OUTPUT: %s\n%s", buf,new_line[lineCount]);
    }

    if(pclose(fp))  {
       // printf("Command not found or exited with error status\n");
        return 0;
    }
    for (i = 0; i < lineCount; ++i)
    {
      /* code */
        printf("Value through indexing %s", new_line[i]);
        // printf("Size of ============================array==== %d",lineCount);
        //  printf("CMD ============================array==== %s",cmd2);
        // printf("Value through dereferencing%s", *new_line);
    }
  time_t t ;
     struct tm *tmp ;
  
     time( &t );

     tmp = localtime( &t );
     char str[20]={0,};
    // using strftime to display time
    strftime(MY_TIME, sizeof(MY_TIME), "%c", tmp);

   char  renamearry[150]={0,};
   char removefilepath[150]={0,};
   char finalPath[150]={0,};
   strncpy(removefilepath,cmd2,strlen(cmd2)-9);
   memcpy(removefilepath,removefilepath+3,sizeof(removefilepath));  
   strcat(removefilepath,"/");
   printf("removefilepath path%s",removefilepath);
   strncpy(renamearry,removefilepath,strlen(removefilepath)-1);
   printf("rename is the final path%s",renamearry);
   printf("strenamercat is the final path%s",renamearry);
   strcat(renamearry,"/");
   char date[100]={0,};
   sprintf(date,"%s",MY_TIME);
   strcat(date,".mp4");
 char path2[2000]={0,};
       strcat(path2,renamearry);
          strcat(path2,date);
    // strcat(renamearry,"/Shubham");
   //  printf("removefilepath path%s",removefilepath);
    strcat(removefilepath,new_line[0]);
   
    printf("strcat is the final path%s",removefilepath);
   // printf("Length of removefilepath is %d\n",strlen(removefilepath));
    strncpy(finalPath,removefilepath,strlen(removefilepath)-1);
    //printf("Length After removal of finalPath is %d\n",strlen(finalPath));
    printf("Final removable file path====================================111111%s\n",finalPath);
     printf("Final removable file path====================================111111%s",finalPath);
    // printf("This is the final path");
  // rename(removefilepath,renamearry);

   int value;
 

     printf("Final removable file path====================================111111%s\n",finalPath);
     printf("Final removable file path====================================111111%s",path2);

    // File name is changed here
char *c=new_line[0];
if(c[0]=='R')
{
   value = rename(finalPath, path2);
 
    // Print the result
    if(!value)
    {
        printf("%s\n", "File name changed successfully");
    }
    else
    {
        perror("Error");
    }

}






  /**  if(lineCount>=20)
    {
    int value=0;
    value= remove(finalPath);
     if(value==-1)
     {
     printf("Not deleted");
     }   
    else
    {
    printf("not deleted");
    }
   
    }
    else{
    
    printf("Waiting.");
    printf(".");
    printf(".");
    
    }
    //break;
   */
   
   // }
}

    int main(void) {
    parse_output();
    char buff[150]={0,};
    char cmd2[150] = "cd /home/bitcomm-06/Gstreamer/Videos/Cam1/";
    strcat(cmd2,new_line[0]);
    printf("path is =========================================%s",cmd2);
 printf("path is =========================================%s",cmd2);
 printf("path is =========================================%s",cmd2);
    strncpy(buff,cmd2,strlen(cmd2)-1);
 printf("path is =========================================%s",buff);
 printf("path is =========================================%s",buff);

   // printf("Buffer is =========================================%s",buff);
   // printf("Buffer is =========================================%s",buff);
    char newCommand[]=" && ls -r";
    strcat(buff,newCommand);
    //printf("Latest Buffer is =========================================%s",buff);
    parse_output2(buff);
   
 
   
    return 0;
}
