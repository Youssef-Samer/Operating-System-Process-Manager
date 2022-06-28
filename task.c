#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[]){
if(argc>1)
{
if(strcmp(argv[1],"--help")==0)
{
printf("\n\n************* Process Manager Description *************\n\nOur process manager consists of 5 main features ( features ):\nThe first one is to list all processes running in the system in details.\nthe second one is to list all processes running in the system by specific user.\nthe third one is to display the ID of all processes running in the system.\nthe fourth one is to kill a specific process running.\nthe fifth one is to send specific signals to a specific process.\n\n");

}}
else{
while(1){
printf("\nPlease choose the number of the operation:\n1)List all the processes in the system\n2)List all the processes grouped by user\n3)Display process ID of all the process\n4)Run/stop a specific process\n5)To send a specific signal to a specific process\n6)Close the program\n");
int operationNo;
char t;
scanf("%d",&operationNo);t=getchar();
if(operationNo==1){
system("ps -aux");
}
else if(operationNo==2){
printf("Please enter the namee of the user:\n");
char userName[100];
gets(userName);
char code2[200]="ps -u ";int i=0;
while(userName[i]!=0){code2[i+6]=userName[i];i++;}
system(code2);
}
else if(operationNo==3){
system("ps");}
else if(operationNo==4){
printf("Please enter the process ID:\n");
char processID[100];gets(processID);
char command[450]="kill ";
strcat(command,processID);system(command);
}
else if(operationNo==5){printf("Please enter the ID of the process:\n");
char processID[10];gets(processID);
printf("1) SIGHUP\t2) SIGINT\t3) SIGQUI\t4) SIGILL\t5)SIGTRAP\t\t6) SIGABRT\t7) SIGBUS\t8) SIGFPE\t9) SIGKILL\t10) SIGUSR1\t11) SIGSEGV\t12) SIGUSR2\t13) SIGPIPE\t14) SIGALRM\t15) SIGTERM\t16) SIGSTKFLT\t17) SIGCHLD\t18) SIGCONT\t19) SIGSTOP\t20) SIGTSTP\t21) SIGTTIN\t22) SIGTTOU\t23) SIGURG\t24) SIGXCPU\t25) SIGXFSZ\t26) SIGVTALRM\t27) SIGPROF\t28) SIGWINCH\t29) SIGIO\t30) SIGPWR\t31) SIGSYS\t34) SIGRTMIN\t35) SIGRTMIN+1\t36) SIGRTMIN+2\t37) SIGRTMIN+3\t38) SIGRTMIN+4\t39) SIGRTMIN+5\t40) SIGRTMIN+6\t41) SIGRTMIN+7\t42) SIGRTMIN+8\t43) SIGRTMIN+9\t44) SIGRTMIN+10\t45) SIGRTMIN+11\t46) SIGRTMIN+12\t47) SIGRTMIN+13\t48) SIGRTMIN+14\t49) SIGRTMIN+15\t50) SIGRTMAX-14\t51) SIGRTMAX-13\t52) SIGRTMAX-12\t53) SIGRTMAX-11\t54) SIGRTMAX-10\t55) SIGRTMAX-9\t56) SIGRTMAX-8\t57) SIGRTMAX-7\t58) SIGRTMAX-6\t59) SIGRTMAX-5\t60) SIGRTMAX-4\t61) SIGRTMAX-3\t62) SIGRTMAX-2\t63) SIGRTMAX-1\t64) SIGRTMAX");
printf("\nPlease enter the number of the signal you want to perform:\n");
char signal[200];
gets(signal);
char command[400]="kill -";
strcat(signal," ");
strcat(command,signal);strcat(command,processID);
printf("%s",command);
system(command);
}
else if(operationNo==6){system("clear");exit(0);} 
else{system("clear");
printf("Please Enter correct choice\n\n\n");}
}
return 0;
}}
