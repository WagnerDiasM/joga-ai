#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
  char acao[20], arma[20];
  int n, dado, vida = 100, monstro, dura, respn, remedinho = 0, bum = 0, matou = 0;
  srand(time(NULL));
   monstro = 10;
  //INTRODUÇÃO
  do{printf("INTRODUÇÂO\n\nVocê é uma pessoa normal que tava dormindo e acordou com ums barulhos na cozinha.\n\n1 = pega o abajur(50%)\n2 = não pega nada\n3 = pega uma faca bem afiada(100%) que por acaso estava do seu lado\n\nO que voçê faz? ");
    scanf("%i", &respn);
    if(respn == 2){
      system("clear");
      printf("----larga de ser burro e pega alguma coisa----\n");
    }
    if(respn == 1){
      system("clear");
      printf("tu foi burro de escolher isso aqui né cara, você pega o abajur, abre a porta do seu quarto e se depara com um gatinho fofinho.");
      strcpy(arma, "abajur");
      dura = 50;
    }
    if(respn == 3){
      system("clear");
      printf("ótima escolha seja feliz agora ;)\nvocê pega a faca extremamente afiada e acaba cortando seu dedo sem querer (-10HP), depois dessa tragédia você abre a porta e se depara com o gatinho mais fofo que vc ja viu.");
      strcpy(arma, "faca muito afiada");
      dura = 100;
      vida = vida - 10;
    }
    if(respn != 1 && respn != 2 && respn != 3){
      system("clear");
      printf("----responde o bagulho certo----\n");
      }
    }while(respn != 1 && respn != 3);
  //PRIMEIRO MONSTRO
do{if(monstro > 0){
  if(dura > 0){printf("\n\narma: %s\ndurabilidade da arma:%i%\nvida:%i/100\nmonstro:%i/10\n\ntu tem %s na mão, vai 'atacar' a fera ou 'fugir'(25%) da fera?\n\nO que você faz? ", arma, dura, vida, monstro, arma);
  scanf("%s", &acao);}
if(dura <= 0){
  printf("\n\ndurabilidade da arma:%i%\nvida:%i/100\nmonstro:%i\n\nvocê não tem nem uma arma, sua única opsão é 'fugir'(25%)!!!\n", dura, vida, monstro);
  scanf("%s", &acao);
  }
  if(strcmp(acao,"atacar") != 0 && strcmp(acao,"fugir") != 0){
    system("clear");
    printf("digita o bagulho certo.");
  }
    if(strcmp(acao,"atacar") == 0 && dura <= 0){
    system("clear");
    printf("você não tem arma o seu animal.");
    }
  if(strcmp(acao,"atacar") == 0 && dura > 0){
    dura = dura - 10;
    dado = rand() % 20;
    if(dado < 5){
      system("clear");
      vida = vida - 10;
      printf("\no dado rolou e caiu um %i.\nvocê falhou miseravelmente, o ataque saiu pela culatra, e o monstro te acertou, fazendo você perder 10 de vida e não causar dano algum.", dado);
      }
    if(dado >= 5 && dado < 10){
      system("clear");
      vida = vida - 5;
      monstro = monstro - 2;
      printf("\no dado rolou e caiu um %i.\nO seu ataque não foi muito bem efetuado, acertou o ataque causando 2 de dano mas ouve um deslize e o monstro acertou você inflingindo 5 de dano.", dado);
      }
        if(dado >= 10 && dado < 15){
          system("clear");
      monstro = monstro - 5;
      printf("\no dado rolou e caiu um %i.\nO ataque foi bem execudado e não ouve nem um deslize, monstro tomou 5 de dano e vc se esquivou a tempo evitando o ataque inimigo.", dado);
      }
            if(dado >= 15 && dado < 20){
              system("clear");
      monstro = monstro - 7;
      printf("\no dado rolou e caiu um %i.\nO ataque foi executado perfeitamente, você cousou dano critico ", dado);
      }
    }
  if(strcmp(acao, "fugir") == 0){
  dado = rand() % 20;
    if(dado <= 9){
      system("clear");
      printf("Não conseguiu fugir e o bixo pegou(-10HP)");
      vida = vida - 10;
    }
    if(dado > 9){
      dado = rand() % 20;
      if(dado <= 9){
        system("clear");
      printf("Não conseguiu fugir e o bixo pegou(-10HP)");
        vida = vida - 10;
    }
          if(dado > 9){
            system("clear");
            printf("parabéns você é um covarde e fugiu com sucesso\n\n");
            n++;
          }
    }
    }
  if(vida <= 0){
    printf("\n\nVocê morreu que triste :(");
    return 0;
  }
  }
  if(monstro <= 0){
    matou++;
    system("clear");
    printf("\n\nvocê matou o gatinho parabéns :)\n\n1-usar o gato morto(100%) como arma e ir para a cozinha.\n2-ir para a cozinha e deixar o gato morto no chão\n\nO que você faz? ");
    scanf("%i", &respn);
    if(respn == 1){
      system("clear");
      strcpy(arma, "gato morto");
      dura = 100;
      n++;
    }
    if(respn == 2){
      system("clear");
    n++;
      }
    if(respn != 1 && respn != 2){
      system("clear");
      printf("Digita o bagulho certo.");
    }
  } 
  }while(n == 0);
  n = 0;
  //ACAMPAMENTO
  do{
    do{
      n = 0;
      printf("\n\nMerthiolate:%i\narma: %s\ndurabilidade da arma:%i%\nvida:%i/100\n\nchegando na cozinha ja te da aquela larica. \n\n1-pegar Merthiolate(quando usado recupera 50HP)\n2-Fazer um miojão(recupera toda a vida)\n3-ir para a sala assistir Bob Esponja\n\nO que você faz? ", remedinho, arma, dura, vida);
    scanf("%i", &respn);
      if(respn != 1 && respn != 2 && respn != 3){
        system("clear");
        printf("Digita o bagulho certo.\n");
      }else{
        n++;
      }
      }while(n == 0);
    n = 0;
        if(respn == 1 && remedinho != 0){
      system("clear");
      printf("tu ja pegou os bagulho.\n\n");
      }
    if(respn == 1 && remedinho == 0){
      system("clear");
      printf("Merthiolates adiquiridos\n\n");
        remedinho = remedinho + 2;
      }
      if(respn == 2 && bum != 0){
      system("clear");
      bum++;
      if(bum <= 3){
      printf("tu comeu o %i° miojão, se você comer mais %i miojão tu explode\n\n", bum, 4 - bum);
      vida = 100;
        }else{
        while(n == 0){
          n = 0;
          printf("se comer mais um miojão você explode!!\nTem certesa?\n\n'sim'\n'não'");
          scanf("%s", &acao);
          if(strcmp(acao,"sim") != 0 && strcmp(acao,"não") != 0){
            system("clear");
            printf("Digita o bagulho certo.\n\n");
          }
          if(strcmp(acao,"sim") != 0 || strcmp(acao,"não") != 0){
            n++;
          }
        }
        n = 0;
        if(strcmp(acao,"sim") == 0){
          printf("Eu te avisei :0\n\n             BUMMMMMMMMMMM");
          return 0;
        }
        if(strcmp(acao,"não") == 0){
          system("clear");
          printf("Boa pa nois parceiro\n\n");
        }
        } 
    }
    if(respn == 2 && bum == 0){
        system("clear");
        printf("Tu comeu um miojão\n\n");
        vida = 100;
        bum++;
      }
    if(respn == 3){
      system("clear");
      if(remedinho != 0 && vida == 100){
        n++;
      }
      if(remedinho == 0 || vida != 100){
      do{
        n = 0;
        printf("\nMerthiolate:%i\narma:%s\ndurabilidade da arma:%i\nvida:%i\n\nchegando na sala você escuta alguém batendo na porta da entrada que também é a porta da saida.\n\n1-voltar para a cozinha para pegar os merthiolates ou rcuperar a vida.\n2-abrir a porta mesmo assim porque você não esta nem ai pra nada.\n\nO que você faz? ", remedinho, arma, dura, vida);
      scanf("%i", &respn);
        if(respn != 1 && respn != 2){
          system("clear");
      printf("Digita o bagulho certo.\n");
    }else{
          n++;
    }
        }while(n == 0);
        n = 0;
      if(respn == 1){
        system("clear");
        printf("boa escolha :)\n\n");
      }
      if(respn == 2){
        system("clear");
        n++;
      }
    }
      }
  }while(n == 0);
  n = 0;
  //velhinha
  do{do{
    n = 0;
    printf("chegando na sala você escuta alguém batendo na porta da entrada que também é a porta da saida, abrindo a porta uma velhinha simpatica te cumprimenta e pede se você viu o gato dela porque ele havia sumido a muito tempo e esse gato é a coisa mais importante da vida dela.\n\n1-dar em cima da velhinha\n2-falar que não viu o gato");
    if(matou != 0){
      printf("\n3-flar que matou o gata dela.");
    }
    printf("\n\nO que você faz? ");
    scanf("%i", &respn);
    if(respn != 2 && respn !=1){
        if(matou == 0 && respn == 3){
          system("clear");
          printf("Digita o bagulho certo\n");
        }else{
        n++;
        }
      if(matou != 0 && respn != 2 && respn !=1 && respn != 3){
        system("clear");
          printf("Digita o bagulho certo\n");
        }else{
        n++;
        }
      }else{
      n++;
      }
    }while(n == 0);
    n = 0;
      if (respn == 3){
        system("clear");
          printf("ela fica enfurecida e saca seu cajado contolador de gatos e te ameaça");
          n++;
      }
    if(respn == 2){
      system("clear");
      printf("\nmas tu é um cara de pau mesmo né cara.\nA velhinha agradece a sua ajuda, mas quando esta prestes a ir embora ela ve");
      if(strcmp(arma, "gato morto") == 0){
          printf(" o gato morto na sua mão, ela fica enfurecida e saca seu cajado contolador de gatos e te ameaça");
          n++;
        }
        if(matou != 0 && strcmp(arma, "gato morto") != 0){
          printf(" o gato morto no chão, ela fica enfurecida e saca seu cajado contolador de gatos e te ameaça");
          n++;
        }
        if(matou == 0){
          printf(" o gato andando na sua casa, ela fica enfurecida e saca seu cajado contolador de gatos e te ameaça");
          n++;
        }
    }
    if(respn == 1){
      while(n == 0){
      n = 0;
        system ("clear");
      printf("a velhinha cai no conto do larápio e adentra a sua casa\n\n1-convidar a senhora para beber um vinho\n2-convidar a senhora para seu quarto");
      if(matou != 0){
      printf("\n3-confesar que matou o gata dela.");
    }
        printf("\n\nO que você faz? ");
      scanf("%i", &respn);
          if(respn != 2 && respn !=1){
        if(matou == 0 && respn == 3){
          system("clear");
          printf("Digita o bagulho certo\n");
        }else{
        n++;
        }
      if(matou != 0 && respn != 2 && respn !=1 && respn != 3){
        system("clear");
          printf("Digita o bagulho certo\n");
        }else{
        n++;
        }
            }else{
            n++;
            }
        }
      n = 0;
      }
      if(respn == 1){
        system("clear");
        printf("a velhinha adorou o convite, mas a caminho da cozinha ela ve");
        if(strcmp(arma, "gato morto") == 0){
          printf(" o gato morto na sua mão, ela fica enfurecida e saca seu cajado controlador de gatos e te ameaça");
          n++;
        }
        if(matou != 0 && strcmp(arma, "gato morto") != 0){
          printf(" o gato morto no chão, ela fica enfurecida e saca seu cajado contolador de gatos e te ameaça");
          n++;
        }
        if(matou == 0){
          printf(" o gato andando na sua casa, ela fica enfurecida e saca seu cajado controlador de gatos e te ameaça");
          n++;
        }
      }
      if(respn == 2 && n == 0){
        system("clear");
        printf("a velhinha achou muito aousada a sua proposta mas aceita porque ela é safada,mas a caminho do quanto ela ve");
        if(strcmp(arma, "gato morto") == 0){
          printf(" o gato morto na sua mão, ela fica enfurecida e saca seu cajado controlador de gatos e te ameaça");
          n++;
        }
        if(matou != 0 && strcmp(arma, "gato morto") != 0){
          printf(" o gato morto no chão, ela fica enfurecida e saca seu cajado controlador de gatos e te ameaça");
          n++;
        }
        if(matou == 0){
          printf(" o gato andando na sua casa, ela fica enfurecida e saca seu cajado controlador de gatos e te ameaça");
          n++;
        }
      }
      if(matou != 0){
        if(respn == 3){
          system("clear");
          printf("ela fica enfurecida e saca seu cajado controlador de gatos e te ameaça");
          n++;
        }
      }
  }while(n == 0);
    n = 0;
  //segundo monstro
  monstro = 100;
  do{
    if(monstro > 0){
  if(dura > 0){printf("\n\nMerthiolate:%i\narma: %s\ndurabilidade da arma:%i%\nvida:%i/100\nmonstro:%i/100\n\ntu tem %s na mão, vai 'atacar' a Veia, 'roubar' o cajado da Veia(12,5%) ou usar 'remedinho'?\n\nO que você faz? ", remedinho, arma, dura, vida, monstro, arma);
  scanf("%s", &acao);}
if(dura <= 0){
  printf("\n\nMerthiolate:%i\ndurabilidade da arma:%i%\nvida:%i/100\nmonstro:%i/100\n\nvocê não tem nem uma arma, suas únicas opsões são 'roubar' o cajado(12,5%) ou usar 'remedinho'!!!\n", remedinho, dura, vida, monstro);
  scanf("%s", &acao);
  }
  if(strcmp(acao,"remedinho") == 0 && remedinho == 0){
    printf("\nVocê não tem Merthiolates");
  }    
  if(strcmp(acao,"remedinho") == 0 && remedinho != 0 && vida != 100){
    remedinho--;
    vida = vida + 50;
    if(vida > 100){
      vida = 100;
    }
    system("clear");
   printf("\nVocê usou um Merthiolate\n\n"); 
  }
  if(strcmp(acao,"remedinho") == 0 && remedinho != 0 && vida == 100){
    system("clear");
   printf("\nVocê esta com a vida cheia\n\n"); 
  }
  if(strcmp(acao,"atacar") != 0 && strcmp(acao,"roubar") != 0 && strcmp(acao,"remedinho") != 0){
    system("clear");
    printf("digita o bagulho certo.");
  }
    if(strcmp(acao,"atacar") == 0 && dura <= 0){
    system("clear");
    printf("você não tem arma o seu animal.");
    }
  if(strcmp(acao,"atacar") == 0 && dura > 0){
    dura = dura - 10;
    dado = rand() % 20;
    if(dado < 5){
      system("clear");
      vida = vida - 15;
      monstro = monstro - 5;
      printf("\no dado rolou e caiu um %i.\nvocê falhou miseravelmente, o ataque saiu pela culatra, e a véia te acertou, fazendo você perder 15 de vida e causar apenas 5 de dano.", dado);
      }
    if(dado >= 5 && dado < 10){
      system("clear");
      vida = vida - 20;
      monstro = monstro - 10;
      printf("\no dado rolou e caiu um %i.\nO seu ataque não foi muito bem efetuado, acertou o ataque causando 10 de dano mas ouve um deslize e a Véia acertou você também inflingindo 20 de dano.", dado);
      }
        if(dado >= 10 && dado < 15){
          system("clear");
      monstro = monstro - 15;
      printf("\no dado rolou e caiu um %i.\nO ataque foi bem execudado e não ouve nem um deslize, monstro tomou 15 de dano e vc se esquivou a tempo evitando o ataque inimigo.", dado);
      }
            if(dado >= 15 && dado < 20){
              system("clear");
      monstro = monstro - 20;
      printf("\no dado rolou e caiu um %i.\nO ataque foi executado perfeitamente, você cousou dano critico (véia -20HP)", dado);
      }
    }
  if(strcmp(acao, "roubar") == 0){
  dado = rand() % 20;
    if(dado <= 9){
      system("clear");
      printf("falhou na na tentativa de furto, e a véia te come no pau(-20HP)\n\n");
      vida = vida - 20;
    }
    if(dado > 9){
      dado = rand() % 20;
      if(dado <= 9){
        system("clear");
      printf("falhou na na tentativa de furto, e a véia te come no pau(-20HP)\n\n");
        vida = vida - 20;
    }
          if(dado > 9){
            dado = rand() % 20;
            if(dado <= 9){
              system("clear");
              printf("falhou na na tentativa de furto, e a véia te come no pau(-20HP)\n\n");
                vida = vida - 20;
            }
            if(dado > 9){
            system("clear");
            printf("Você roubou o cajado da Véia com sucesso, e ela sabendo o potencial do cajado sai correndo.\n\n");
              strcpy(arma,"cajado da véia");
            n++;
              matou--;
              }
          }
    }
    }
  if(vida <= 0){
    printf("\n\nVocê morreu que triste :(");
    return 0;
  }
  }
  if(monstro <= 0){
    matou = 0;
    matou++;
    system("clear");
    printf("\n\nvocê matou a Véia parabéns :)\n----ADIQUIRIU CAJADO DA VÉIA----\n\n");
    strcpy(arma, "cajado da véia");
    n++;
  } 
  }while(n == 0);
  n = 0;
  //acampamento 2
  do{
    do{
      n = 0;
      printf("Agora com o poder do pau da véia você sente que pode fazer qualque coisa.\n\nMerthiolate: %i\narma:%s\ndurabilinade da arma: amor de mãe\nvida:%i/100\n\n1-Bater o pau no chão(gatos trazem 4 remedinhos)\n2-Bater o pau na mesa(gatos fazem um miojão)\n3-ir para a sala tentar assistir Bob Esponja denovo\n\nO que você faz? ", remedinho, arma, vida);
    scanf("%i", &respn);
      if(respn != 1 && respn != 2 && respn != 3){
        system("clear");
        printf("Digita o bagulho certo.\n");
      }else{
        n++;
      }
      }while(n == 0);
    n = 0;
        if(respn == 1 && remedinho >= 4){
      system("clear");
      printf("Tu controla os gato, mas não abusa do joguinho, só pode pegar uma vez.\n\n");
      }
    if(respn == 1 && remedinho <= 2){
      system("clear");
      printf("Merthiolates adiquiridos\n\n");
        remedinho = remedinho + 4;
      }
    if(respn == 2){
      if(bum <= 3){
        system("clear");
      printf("tu comeu o %i° miojão, se você comer mais %i miojão tu explode\n\n", bum, 4 - bum);
      vida = 100;
        bum ++;
        }
        if(bum == 4){
        while(n == 0){
          n = 0;
          system("clear");
          printf("se comer mais um miojão você explode!!\nTem certesa?\n\n'sim'\n'não'");
          scanf("%s", &acao);
          if(strcmp(acao,"sim") != 0 && strcmp(acao,"não") != 0){
            system("clear");
            printf("Digita o bagulho certo.\n\n");
          }
          if(strcmp(acao,"sim") == 0 || strcmp(acao,"não") == 0){
            n++;
          }
        }
        n = 0;
        if(strcmp(acao,"sim") == 0){
          system("clear");
          printf("Eu te avisei :0\n\n             BUMMMMMMMMMMM");
          return 0;
        }
        if(strcmp(acao,"não") == 0){
          system("clear");
          printf("Boa pa nois parceiro\n\n");
        }
        }
      }
        if(respn == 2 && bum == 0){
        system("clear");
        printf("Tu comeu um miojão\n\n");
        vida = 100;
        bum++;
      }
    if(respn == 3){
      system("clear");
      if(remedinho >= 4 && vida == 100){
        n++;
        printf("\nVocê finalmente consegue ligar a Tv, mas quando estava praste a colocar seu bumbum no conforto de seu sofá, Chuck Norris aparece arrebentado a porta e gritano diz que ");
          if(matou <= 0){
            printf("acabou de ver avó dele correndo e gritando por ajuda, pois um louco havia acabado de roubar sua bemgala.");
          }
          if(matou == 1){
            printf("estava procurando sua avó que estava procurando seu gato, e ouviu os gritos dela vindos desse apartamento.");
      }
        }
      if(remedinho < 4 || vida != 100){
      do{
        n = 0;
        printf("Da primeira vez eu até te ajudei mas agora você ta sendo burro.\n\nTu não vai os bagulho de regenerar a vida mesmo?.\n\n1-voltar para escravizar os gatinhos.\n2-Continuar porque sim.\n\nO que você faz? ");
      scanf("%i", &respn);
        if(respn != 1 && respn != 2){
          system("clear");
      printf("Digita o bagulho certo.\n");
    }else{
          n++;
    }
        }while(n == 0);
        n = 0;
      if(respn == 1){
        system("clear");
        printf("Ta aprendendo garoto(a) :)\n\n");
      }
      if(respn == 2){
        system("clear");
        n++;
          printf("\NVocê finalmente consegue ligar a Tv, mas quando estava praste a colocar seu bumbum no conforto de seu sofá, Chuck Norris aparece arrebentado a porta e gritano diz que ");
          if(matou <= 0){
            printf("acabou de ver avó dele correndo e gritando por ajuda, pois um louco havia acabado de roubar sua bemgala.");
          }
          if(matou == 1){
            printf("estava procurando sua avó que estava procurando seu gato, e ouviu os gritos dela vindos desse apartamento.");
          }
      }
    }
      }
  }while(n == 0);
  n = 0;
  //TERCEIRO MONSTRO
  monstro = 1000;
  do{
    if(monstro > 0){
  if(dura > 0){printf("\n\nMerthiolate:%i\narma: %s\ndurabilidade da arma: È igual amor de mãe\nvida:%i/100\nmonstro:%i/1000\n\ntu tem %s na mão, fugir é impossível ninguém foge de Chuck Norris, vai 'atacar' a lenda, usar 'remedinho'?\n\nO que você faz? ", remedinho, arma, vida, monstro, arma);
  scanf("%s", &acao);}
  if(strcmp(acao,"remedinho") == 0 && remedinho == 0){
    printf("\nVocê não tem Merthiolates");
  }    
  if(strcmp(acao,"remedinho") == 0 && remedinho != 0 && vida != 100){
    remedinho--;
    vida = vida + 50;
    if(vida > 100){
      vida = 100; 
    } 
    system("clear");
   printf("\nVocê usou um Merthiolate\n\n");
  }
  if(strcmp(acao,"remedinho") == 0 && remedinho != 0 && vida == 100){
    system("clear");
   printf("\nVocê esta com a vida cheia\n\n"); 
  }
  if(strcmp(acao,"atacar") != 0 && strcmp(acao,"remedinho") != 0){
    system("clear");
    printf("digita o bagulho certo.");
  }
  if(strcmp(acao,"atacar") == 0){
    dado = rand() % 20;
    if(dado < 5){
      system("clear");
      vida = vida - 10;
      monstro = monstro - 1;
      printf("\no dado rolou e caiu um %i.\nVocê mandou seus gatos atacarem, mas Chuck Norris saca um pepino e os gatos se espantam, Chuck Norris taca o pepino em você causando 10 de dano, instantes depois um cisco entra no olho do Chuck Norris inflinindo 1 de dano.", dado);
      }
    if(dado >= 5 && dado < 10){
      system("clear");
      vida = vida - 20;
      monstro = monstro - 50;
      printf("\no dado rolou e caiu um %i.\nVocê mandou seus gatos atacarem, Chuck Norris recebe poucas unhadas(monstro -50), e Chuck Norris te lança uma granada, recebe 20 de dano por conta da proteção dos gatos.", dado);
      }
        if(dado >= 10 && dado < 15){
          system("clear");
      monstro = monstro - 15;
      printf("\no dado rolou e caiu um %i.\nVocê mandou seus gatos atacarem, Chuck Norris fica envolto por gatos ao mesmo tempo em que mordem suas orelhas, Chuck Norris recebe 80 de dano, e você se safa desa pois ele não teve tempo de reação.", dado);
      }
            if(dado >= 15 && dado < 20){
              system("clear");
      monstro = monstro - 20;
      printf("\no dado rolou e caiu um %i.\nVocê invoca o famoso GATO DE BOTAS!!!, Chuck Norris estremece, GATO DE BOTAS!!!! avança e causa dano critico.(monstro - 150HP), Chuck Norris fica em choque e não consegue reagir.", dado);
      }
    }
  if(vida <= 0){
    printf("\n\nVocê morreu que triste :(");
    return 0;
  }
  }
  if(monstro <= 0){
    matou++;
    system("clear");
    printf("\n\nvocê matou a lenda parabéns :)\n\nVocê se torna o Homem mais poderoso da terra, e finalmente pode assistir Bob Esponja...\n\n\n\n\n\n\n...HHOOOOOOOOOO Vive num abacaxi e mora no mar, Bob Esponja Calça Quadrada, Tem a cor amarela e espirra água, Bob Esponja Calça Quadrada......");
    n++;
  } 
  }while(n == 0);
  return 0;
}