// Online C compiler to run C program online
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {

    int tema, resp, premio=0, estado1=1, estado2=1, estado3=1, estado4=1, estado5=1, continua=0;
  //introdução
    printf("Bem-vindo ao jogo do milhão! Esta é a sua grande oportunidade!\n");
    //MENU
    while(1){
    printf("Escolha um tema:\n[1] Conhecimentos gerais\n[2] História\n[3] Biologia\n[4] Geografia\n[5] Química\n[0] Sair\n");
    scanf("%d", &tema);
    
    
    switch (tema)
    {
        
    case 0: // SAIR
    printf ("Obrigado por jogar o Show do Milhão!\n\n");
    break;
    
    case 1: //CONHECIMENTOS GERAIS
    if(estado1==1){
        
    //pergunta 1
        printf ("\n----CONHECIMENTOS GERAIS----\n");
        printf ("\n1-Valendo 10 mil €.\nQual é o autor da obra '1984'?\n");
    printf ("[1] George Orwell\n[2] Aldous Huxley\n[3] Ray Bradbury\n[4] H.G. Wells\nResposta: ");
    scanf ("%d", &resp);
        if (resp==1)
        {
            printf ("Resposta certa! Você ganhou 10 mil €!\n");
            premio+=10;
            printf ("Você tem %d mil euros!!\n", premio);
        }
            else 
            {
                printf ("Resposta errada! Você perdeu TUDO!!\n");
                premio=0;
                return 0;
            }
     //pergunta 2
     printf ("\n2-Valendo 20 mil €.\nQual o  único animal doméstico  que não é  mencionado na Bíblia.?\n");
    
    printf ("[1] Tartaruga\n[2] Peixe\n[3] Cão\n[4] Gato\nResposta: ");
    scanf ("%d", &resp);
        if (resp==4)
        {
            printf ("Resposta certa! Você ganhou 20 mil €!\n");
            premio+=20;
            printf ("Você tem %d mil euros!!\n", premio);
        }
            else 
            {
                printf ("Resposta errada! Você perdeu TUDO!!\n");
                premio=0;
                return 0;
            }

     
    //pergunta 3
   
        printf ("\n3-Valendo 30 mil €.\nQual é a montanha mais alta do mundo?\n");
    printf ("[1] Monte Everest\n[2] Annapurna\n[3] Makalu\n[4] K2 \nResposta: ");
    scanf ("%d", &resp);
        if (resp==1)
        {
            printf ("Resposta certa! Você ganhou 30 mil €!\n");
            premio+=30;
            printf ("Você tem %d mil euros!!\n", premio);
           
        }
            else 
            {
                printf ("Resposta errada! Você perdeu TUDO!!\n");
                premio=0;
                return 0;
            }
   //pergunta 4
   printf ("\n4-Valendo 40 mil €.\nEm que ano a taça do mundo da copa foi roubada?\n");
    
    printf ("[1] 1972 \n[2] 1983 \n[3] 1980 \n[4] 1990   \nResposta: ");
    scanf ("%d", &resp);
        if (resp==2)
        {
            printf ("Resposta certa! Você ganhou 40 mil €!\n");
            premio+=40;
            printf ("Você tem %d mil euros!!\n", premio);
        }
            else 
            {
                printf ("Resposta errada! Você perdeu TUDO!!\n");
                premio=0;
                return 0;
            }

   //pergunta 5
   printf ("\n5-Valendo 100 mil €.\nQual o nome se da para a fobia de barba?\n");
    
    printf ("[1] Agliofobia \n[2] Pogonofobia \n[3] Abissofobia \n[4] Ablutofobia   \nResposta: ");
    scanf ("%d", &resp);
        if (resp==2)
        {
            printf ("Resposta certa! Você ganhou 100 mil €!\n");
            premio+=100;
            printf ("Você tem %d mil euros!!\n", premio);
            
        }
            else 
            {
                printf ("Resposta errada! Você perdeu TUDO!!\n");
                premio=0;
                return 0;
            }
            
    estado1=0;
    }
    else 
    printf ("\nVocê já jogou este tema.\n");
    break;
    
    case 2:
    // HISTÓRIA
    if(estado2==1){
    //pergunta 1
    printf ("\n----HISTÓRIA----\n");
    printf ("\n1-Valendo 10 mil €.\nÉ considerado um marco inicial da Idade Contemporânea:\n");
printf ("[1] A Revolução Francesa\n[2] A Revolução Industrial\n[3] A revolução Americana\n[4] Guerra da Independência do Brasil\n Resposta: ");
scanf ("%d", &resp);
            if (resp==1)
            { printf ("Resposta certa! Você ganhou 10 mil €!\n");
            premio+=10;
            printf ("Você tem %d mil euros!!\n", premio);
            }
            else 
            {
                printf ("Resposta errada! Você perdeu TUDO!!\n");
                premio=0;
                return 0;
            }
            
    //pergunta 2
printf ("\n2-Valendo 20 mil €.\nQuem foi Marco Aurélio:\n");
printf ("[1] Físico\n[2] Cientista\n[3] Filosofo\n[4] Imperador Romano\nResposta: ");
scanf ("%d", &resp);
            if (resp==4)
            { printf ("Resposta certa! Você ganhou 20 mil €!\n");
            premio+=20;
            printf ("Você tem %d mil euros!!\n", premio);
            }
            else 
            {
                printf ("Resposta errada! Você perdeu TUDO!!\n");
                premio=0;
                return 0;
            }
            
    //pergunta 3
printf ("\n3-Valendo 30 mil €.\nEm que ano começou a primeira guerra Mundial?.\n");
printf ("[1] 1912\n[2] 1900\n[3] 1914\n[4] 1905\nResposta: ");
scanf ("%d", &resp);
        if (resp==3)
        { printf ("Resposta certa! Você ganhou 30 mil €!\n");
        premio+=30;
        printf ("Você tem %d mil euros!!\n", premio);
        }
        else
        {
        printf ("Resposta errada! Você perdeu TUDO!!\n");
        premio=0;
        return 0;
        }

//pergunta 4
printf ("\n4-Valendo 40 mil €.\nO que aconteceu em 1989?\n");
    
    printf ("[1] Revolução Industrial \n[2] Fim da era Vitoriana \n[3] Quebra da Bolsa de NY \n[4] Queda do muro de berlin   \nResposta: ");
    scanf ("%d", &resp);
        if (resp==4)
        {
            printf ("Resposta certa! Você ganhou 40 mil €!\n");
            premio+=40;
            printf ("Você tem %d mil euros!!\n", premio);
        }
            else 
            {
                printf ("Resposta errada! Você perdeu TUDO!!\n");
                premio=0;
                return 0;
            }

//pergunta 5
printf ("\n5-Valendo 100 mil €.\nEm que ano a capital de Portugal foi para o Brasil?\n");
    
    printf ("[1] 1885 \n[2] 1589\n[3] 1700 \n[4] 1763  \nResposta: ");
    scanf ("%d", &resp);
        if (resp==4)
        {
            printf ("Resposta certa! Você ganhou 100 mil €!\n");
            premio+=100;
            printf ("Você tem %d mil euros!!\n", premio);
        }
            else 
            {
                printf ("Resposta errada! Você perdeu TUDO!!\n");
                premio=0;
                return 0;
            }
estado2=0;
    }
    else 
    printf ("\nVocê já jogou este tema.\n");
break;

    case 3: //BIOLOGIA
    if(estado3==1){
    //pergunta 1
    printf ("\n----BIOLOGIA----\n");
    printf("\n1-Valendo 10 mil €.\nQual animal pode viver vários dias sem cabeça?\n");
 printf ("[1] Aranha\n[2] Barata\n[3] Formiga\n[4] Lesma\nResposta: ");
 scanf ("%d", &resp);
             if (resp==2)
            {
            printf ("Resposta certa! Você ganhou 10 mil €!\n");
            premio+=10;
            printf ("Você tem %d mil euros!!\n", premio);
            }
            
            else
            {
            printf ("Resposta errada! Você perdeu TUDO!!\n");
            premio=0;
            return 0;
            }
//pergunta 2
printf("\n2-Valendo 20 mil €.\nQual animal possui três corações?\n");
 printf ("[1] polvo\n[2] peixe palhaço\n[3] Formiga de fogo\n[4] Lesma\nResposta: ");
  scanf ("%d", &resp);
              if (resp==1)
            {
            printf ("Resposta certa! Você ganhou 20 mil €!\n");
            premio+=20;
                printf ("Você tem %d mil euros!!\n", premio);
            }
            
            else
            {
            printf ("Resposta errada! Você perdeu TUDO!!\n");
            premio=0;
            return 0;
            }


//pergunta 3
printf("\n3-Valendo 30 mil €.\nQual árvore tem a maior semente?\n");
printf ("[1] Pinheiro\n[2] Angelim-Vermelho\n[3] Sequoia\n[4] Murumuru\nResposta: ");
scanf ("%d", &resp);
            if (resp==3)
            {
            printf ("Resposta certa! Você ganhou 30 mil €!\n");
            premio+=30;
                printf ("Você tem %d mil euros!!\n", premio);
            }

            else
            {
            printf ("Resposta errada! Você perdeu TUDO!!\n");
            premio=0;
            return 0;
            }
//pergunta 4
 printf ("\n4-Valendo 40 mil €.\nEm qual parte do nosso corpo se encontra 1/4 dos ossos ?\n");
    
    printf ("[1] Coluna\n[2] Quadril  \n[3] Pés \n[4] Mãos \nResposta: ");
    scanf ("%d", &resp);
        if (resp==3)
        {
            printf ("Resposta certa! Você ganhou 40 mil €!\n");
            premio+=40;
            printf ("Você tem %d mil euros!!\n", premio);
        }
            else 
            {
                printf ("Resposta errada! Você perdeu TUDO!!\n");
                premio=0;
               return 0;
            }
    //pergunta 5
   printf ("\n5-Valendo 100 mil €.\nContribuem para mais mortes do que qualquer animal na Terra?\n");
    
    printf ("[1] Mosquito \n[2] Rinoceronte  \n[3] Leão \n[4] Cobra \nResposta: ");
    scanf ("%d", &resp);
        if (resp==1)
        {
            printf ("Resposta certa!  Você ganhou 100 mil €!\n");
            premio+=100;
            printf ("Você tem %d mil euros!!\n\n", premio);
        }
            else 
            {
                printf ("Resposta errada! Você perdeu.\n");
                premio=0;
                return 0;
            }
estado3=0;
    }
    else 
    printf ("\nVocê já jogou este tema.\n");
 break;
 
case 4: //GEOGRAFIA
if(estado4==1){
//pergunta 1
printf ("\n----GEOGRAFIA----\n");
printf ("\n1-Valendo 10 mil €.\nQual é o maior rio do mundo em volume de água?\n");
    
    printf ("[1] Nilo\n[2] Amazonas\n[3] Yangtzé\n[4] Mississipi\nResposta: ");
    scanf ("%d", &resp);
        if (resp==2)
        {
            printf ("Resposta certa! Você ganhou 10 mil €!\n");
            premio+=10;
            printf ("Você tem %d mil euros!!\n", premio);
        }
            else 
            {
                printf ("Resposta errada! Você perdeu TUDO!!\n");
                premio=0;
               return 0;
            }
//pergunta 2

printf ("\n2-Valendo 20 mil €.\nQual o primeiro território a desaparecer com o aquecimento global?\n");
    
    printf ("[1] Nova zelandia  \n[2] Antartida   \n[3] Maldivas \n[4] Austrália  \nResposta: ");
    scanf ("%d", &resp);
        if (resp==3)
        {
            printf ("Resposta certa!! Você ganhou 20 mil €!\n");
            premio+=20;
            printf ("Você tem %d mil euros!!\n", premio);
        }
            else 
            {
                printf ("Resposta errada! Você perdeu TUDO!!\n");
                premio=0;
                return 0;
            }
// pergunta 3
printf ("\n3-Valendo 30 mil €.\nProduz a maior parte do oxigênio do mundo?\n");
    
    printf ("[1] Russia \n[2] Siberia   \n[3] Suriname \n[4] Amazonia  \nResposta: ");
    scanf ("%d", &resp);
        if (resp==2)
        {
            printf ("Resposta certa! Você ganhou 30 mil €!\n");
            premio+=30;
            printf ("Você tem %d mil euros!!\n", premio);
        }
            else 
            {
                printf ("Resposta errada! Você perdeu TUDO!!\n");
                premio=0;
                return 0;
            }
            
//pergunta 4
printf ("\n4-Valendo 40 mil €.\nQual pais possui mais da metade dos lagos de água doce do mundo?\n");
    
    printf ("[1] Brasil \n[2] Estados Unidos  \n[3] Canadá \n[4] Rússia   \nResposta: ");
    scanf ("%d", &resp);
        if (resp==3)
        {
            printf ("Resposta certa! Você ganhou 40 mil €!\n");
            premio+=40;
            printf ("Você tem %d mil euros!!\n", premio);
        }
            else 
            {
                printf ("Resposta errada! Você perdeu TUDO!!\n");
                premio=0;
               return 0;
            }

//pergunta 5
printf ("\n5-Valendo 100 mil €.\nQual país tem a maior fronteira com a França?\n");
    
    printf ("[1] Alemanha \n[2] Espanha  \n[3] Brasil \n[4] Bélgica   \nResposta: ");
    scanf ("%d", &resp);
        if (resp==3)
        {
            printf ("Resposta certa! Você ganhou 100 mil €!\n");
            premio+=100;
            printf ("Você tem %d mil euros!!\n", premio);
        }
            else 
            {
                printf ("Resposta errada! Você perdeu TUDO!!\n");
                premio=0;
               return 0;
            }
estado4=0;
    }
    else 
    printf ("\nVocê já jogou este tema.\n");
break;

case 5: // QUÍMICA
if(estado5==1){
//pergunta 1
printf ("\n----QUÍMICA----\n");
 printf("\n1-Valendo 10 mil €.\nEm um átomo,o que determina um elemento químico?\n");
    printf("[1] Neutroes\n[2] Nucleo\n[3] Protoes\n[4] Electron \nResposta: ");
        scanf("%d", &resp);
         if (resp==3)
        {
            printf ("Resposta certa! Você ganhou 10 mil €!\n\n");
            premio+=10;
            printf ("Você tem %d mil euros!!\n", premio);
        }
            else 
            {
                printf ("Resposta errada! Você perdeu TUDO!!\n");
                premio=0;
                return 0;
            }
//pergunta 2
printf("\n2-Valendo 20 mil €.\nQual é o elemento químico mais abundante na crosta terrestre??\n");
    printf("[1] Potassio\n[2] Magnesio\n[3] Oxigénio\n[4] Ferro\nResposta: ");
    scanf("%d", &resp);
        if(resp==3)
 {
            printf ("Resposta certa! Você ganhou 20 mil €!\n\n");
            premio+=20;
            printf ("Você tem %d mil euros!!\n", premio);
        }
            else 
            {
                printf ("Resposta errada! Você perdeu TUDO!!\n");
                premio=0;
                return 0;
            }

//pergunta 3
 printf("\n3-Valendo 30 mil €.\nQuantos elementos químicos existem??\n");
    printf("[1] 100\n[2] 110\n[3] 115\n[4] 118\nResposta: ");
    scanf("%d", &resp);
        if(resp==4)
        {
            printf ("Resposta certa! Você ganhou 30 mil €!\n\n");
            premio+=30;
            printf ("Você tem %d mil euros!!\n", premio);
        }
            else 
            {
                printf ("Resposta errada! Você perdeu TUDO!!\n");
                premio=0;
                return 0;
            }
            
    //pergunta 4
     printf("\n4-Valendo 40 mil €.\nQue gás têm os refrigerantes?\n");
printf("[1] Dioxico Carbonico\n[2] Argonio\n[3] Metano\n[4] Nitrogênio\nResposta: ");

    scanf("%d", &resp);

            if(resp==1)
            {
            printf ("Resposta certa! Você ganhou 40 mil €!\n\n");
            premio+=40;
            printf ("Você tem %d mil euros!!\n", premio);
        }
            else 
            {
                printf ("Resposta errada! Você perdeu TUDO!!\n");
                premio=0;
                return 0;
            }

    //pergunta 5
     printf("\n5-Valendo 100 mil €.\nQual destes elementos é um halogênio?\n");
        printf("[1] H\n[2] F \n[3] Po \n[4] Ag\nResposta: ");
        scanf("%d", &resp);
        if(resp==2)
        {
            printf ("Resposta certa! Você ganhou 100 mil €!\n\n");
            premio+=100;
            printf ("Você tem %d mil euros!!\n", premio);
        }
            else 
            {
                printf ("Resposta errada! Você perdeu TUDO!!\n");
                premio=0;
                return 0;
            }
            
            estado5=0;
    }
    else 
    printf ("\nVocê já jogou este tema.\n");
           break;
       }
    }
     return 0;
}


