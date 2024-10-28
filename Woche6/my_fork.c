#include <stdio.h>
#include <unistd.h>

int main(void){
    printf("Meine Prozess-ID ist %d\n\n", getpid());
    pid_t pid = fork();
    if (pid == -1)
    {
        printf("Fehler bei der Erstellung des Prozesses\n");
        return 1;
    } else if (pid == 0){
        printf("Kindprozess\n");
        printf("Der Kindprozess hat die ID: %d\n",getpid()); //getpid() gibt ID Prozesses zurück
        printf("Mein Elternprozess: %d\n\n",getppid()); //getppid() gibt ID des Elternprozesses zurück
    } else {
        printf("Elternprozess\n");
        printf("Meine Prozess-ID ist: %d\n",getpid()); //getpid() gibt ID Prozesses zurück
        printf("MMeine Kind-ID: %d\n\n",pid); //getppid() gibt ID des Elternprozesses zurück       
    }
    
    return 0;
}