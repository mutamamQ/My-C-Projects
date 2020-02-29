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
double inpd; //input for only numbers
int matNo; //the array number of the material and property
double weight;
int emptyArrayNo;
double result;
//function to identify the correct number for materials array
void addNewMat(){
    printf("Do you want to use a new or existing material?\n");
    scanf("%s",inp); //to create a new material
    if(strcmp(inp,"new")==0){
        for (int i = 0; i < 101; i++)
        {
            if (materials[i][0] != 0)
            {
                emptyArrayNo = i; //check which array space is the first empty one
            }   
        }
        printf("What is the materials name");
        scanf("%s",inp);
        materials[emptyArrayNo][0]=*inp;
        printf("What is the materials' latent heat of fusion");
        scanf("%lf",&inpd);
        fuse[emptyArrayNo]=inpd;
        printf("What is the materials' latent heat of vaporization");
        scanf("%lf",&inpd);
        vapor[emptyArrayNo]=inpd;
    }
    else if (strcmp(inp,"existing") == 0)
    {
        return;
    }
}
void grams(){
    printf("What is the mass in grams\n");
    scanf("%lf", &weight);
}
void materialno(){
    printf("what material are you converting\n");
    scanf("%s", inp);
    for (int i = 0; i < 30; i++){

        if(strcmp(&materials[i][0],inp) == 0){
            matNo = i;
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
    addNewMat();
    materialno();
    grams();
    FOrV();
}
