#include <stdio.h>

int main(){
    float p1; float p2; float t;
    float media;

    printf("Digite as notas da P1, P2 e do Trabalho:\n");
    scanf("%f %f %f", &p1, &p2, &t);
    media=(p1+p2+t)/3;

    printf("Media do aluno: %.2f",media);

return 0;    
}