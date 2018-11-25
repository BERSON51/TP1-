#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;
    printf("<<<<<<<<<<<<<<<TP1>>>>>>>>>>>>>\n");
    printf("1 exercice 1q1\n");
    printf("2 exercice 1q2\n");
    printf("3 exercice 2\n");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        exo1q1();
        break;
        case 2:
        exo1q2();
        break;
        case 3:
        exo2();
        break;
        default :
        printf("Error\n" );
        break;
    }

}
int exo1q1 ()
{
    float op1;
    float op2;
    float resultat;

    printf("premier operande ?");
    scanf("%f",&op1);
    printf("deuxieme operande ?");
    scanf("%f",&op2);

    resultat = op1 + op2;
    printf("le resultat est %f",resultat);
    return 0;
}

int exo1q2 ()
{
    float op1 , op2 , resultat;
    char o ;
    printf("premier operande ?");
    scanf("%f",&op1);
    printf("deuxieme operande ?");
    scanf("%f",&op2);
    printf("choisir un operateur (+,-,*,/) ");
    scanf("%s",&o);


    switch(o)
    {
    case '+' :
        resultat = op1 + op2;
        break;
        case '-' :
        resultat=op1-op2;
        break;
        case '*' :
        resultat=op1*op2;
        break;
        case '/' :
        resultat=op1/op2;
        break;
        default :
         printf("Error\n" );

    }
    printf("le resultat est %f",resultat);
}
int exo2()
{
    int Incrementation = 0;
    int Fin = 0;
    float Prix = 1;
    float PrixMoyen;
    float PrixTotal;
    float PrixMax;
    float PrixMin;
    float PrixFinal;

    printf("Bonjour \n");

    while(Prix != 0)
    {
        Incrementation = Incrementation + 1;
        printf("Prix de l'article n°%d : \n", Incrementation);
        scanf("%f",&Prix);

        PrixTotal = PrixTotal + Prix;

        if(PrixMax < Prix)
        {
            PrixMax = Prix;
        }

         if(Incrementation == 1)
        {
            PrixMin = Prix;
        }
        else if(Incrementation > 1 && Prix > 0 && PrixMin > Prix)
        {
            PrixMin = Prix;
        }





    }

    PrixMoyen = PrixTotal / (Incrementation-1);
    printf("%f",PrixTotal);
    printf("Le prix moyen de l'achat total est %f ;\n",PrixMoyen);
    printf("L'article le moins cher a coûté %f ;\n",PrixMin);
    printf("L'article le plus cher a coûté %f ;\n",PrixMax);

    if(PrixTotal<=99){
        printf("Vous n'avez pas de remise ;\n");
        PrixFinal = PrixTotal;
        printf("Vous devez payer %f ;\n",PrixFinal);

    }

    else if(100<=PrixTotal && PrixTotal<=499){
        printf("Vous avez 10% de remise ;\n");
        PrixFinal = PrixTotal * 0.90;
        printf("Vous devez payer %f ;\n",PrixFinal);
    }

    else if(500<=PrixTotal && PrixTotal<=999){
        printf("Vous avez 20% de remise ;\n");
        PrixFinal = PrixTotal * 0.80;
        printf("Vous devez payer %f ;\n",PrixFinal);

    }

    else if(PrixTotal>999){
        printf("Vous avez 30% de remise ;\n");
        PrixFinal = PrixTotal *0.70;
        printf("Vous devez payer %f ;\n",PrixFinal);
    }

    printf("Merci et aurevoir. \n");

  return 0;
