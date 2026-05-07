#include <stdio.h>
#include <string.h>

typedef struct 
{
    int forca;
    int agilidade;
} Atributos;

typedef struct 
{
    char nome_personagem[50];
    Atributos stats;
} Personagem;

void subir_nivel(Personagem *p){
    p->stats.forca += p->stats.forca * 0.1;
}

int main(){
    Personagem p1;
    strstr(p1.nome_personagem, "Ard");
    p1.stats.forca = 10;
    p1.stats.agilidade = 5;

    printf("força anterior: %d; \n", p1.stats.forca);

    Personagem *p = &p1;
    subir_nivel(p);

    printf("força atual: %d; \n", p1.stats.forca);
}
