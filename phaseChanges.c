#include <stdio.h>
#include <string.h>
char materials[100][100]={
    {"water"},
    {"methane"}};
//materials name
double fuse[]={333.55,58.99};
double vapor[]={2257,480.6};
/*latent heat of fusion, latent heat of vaporization */
char inp[100];
int matNo; //the array number of the material and property
int weight;
double result;
 //function to identify the correct number for materials array
void materialno(){
    printf("what material are you converting\n");
    scanf("%s", inp);
    for (int i = 0; i < 30; i++){

        if(strcmp(&materials[i][0],inp) == 0){
            matNo = i;
            printf("What is the mass in grams\n");
            scanf("%d", &weight);
            return;
        }
    }
}
void FOrV(){
    printf("freezing/melting or vaporization/condensation\n");
    scanf("%s", inp);    
    if (strcmp(inp,"freezing") == 0 || strcmp(inp,"melting") == 0)
    {   
        result = fuse[matNo]*weight;
        printf("The amount of energy needed to covert is %f joules\n", result);
        return;
    }
    else if (strcmp(inp,"vaporization") == 0 || strcmp(inp,"condensation") == 0)
    {   
        result = vapor[matNo]*weight;
        printf("The amount of energy needed to covert is %f joules\n", result);
        return;
    }
}
int main(){
    materialno();
    FOrV();
}
