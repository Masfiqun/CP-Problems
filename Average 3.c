/*beecrowd | 1040
Average 3
Adapted by Neilor Tonin, URI  Brazil

Timelimit: 1
Read four numbers (N1, N2, N3, N4), which one with 1 digit after the decimal point, corresponding to 4 scores obtained by a student. Calculate the average with weights 2, 3, 4 e 1 respectively, for these 4 scores and print the message "Media: " (Average), followed by the calculated result. If the average was 7.0 or more, print the message "Aluno aprovado." (Approved Student). If the average was less than 5.0, print the message: "Aluno reprovado." (Reproved Student). If the average was between 5.0 and 6.9, including these, the program must print the message "Aluno em exame." (In exam student).

In case of exam, read one more score. Print the message "Nota do exame: " (Exam score) followed by the typed score. Recalculate the average (sum the exam score with the previous calculated average and divide by 2) and print the message “Aluno aprovado.” (Approved student) in case of average 5.0 or more) or "Aluno reprovado." (Reproved student) in case of average 4.9 or less. For these 2 cases (approved or reproved after the exam) print the message "Media final: " (Final average) followed by the final average for this student in the last line.

Input
The input contains four floating point numbers that represent the students' grades.

Output
Print all the answers with one digit after the decimal point.
*/

#include<stdio.h>
#include<math.h>

int main(){
    float N1, N2, N3, N4, score, avg, final_avg;

    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

    avg = (N1*2+N2*3+N3*4+N4*1)/10;

    if(avg>=5.0 && avg<=6.9){
        scanf("%f", &score);
    }

    printf("Media: %.1f\n", avg);

    if(avg >=7.0){
        printf("Aluno aprovado.\n");
    }else if(avg < 5.0){
        printf("Aluno reprovado.\n");
    }else{
        printf("Aluno em exame.\n");
    }

    if(avg>=5.0 && avg<=6.9){
        printf("Nota do exame: %.1f\n", score);

        final_avg = (score+avg)/2;

        if(final_avg >= 5.0){
            printf("Aluno aprovado.\n");
        }else{
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n", final_avg);
    }

    return 0;
}