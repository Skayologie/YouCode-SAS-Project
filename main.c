#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int choix ;
int studentsCounter = 0 ;

//Structure Des Informations d'etudiants GHOST pour Test le program 
typedef struct {
    char id[13];
    char name[20];
    char lastName[20];
    int birthDay;   // Day of birth
    int birthMonth; // Month of birth
    int birthYear;  // Year of birth
    char subject[20];
    float note;     // Random note
} Student;

Student students[] = {
        {"ID9876543210", "Emma",    "Smith",    12,  5,  2001, "Biologie",      14.5},
        {"ID1234567891", "Liam",    "Johnson",  23,  8,  2000, "Mathematiques", 17.3},
        {"ID2345678902", "Sophia",  "Brown",    8,   11, 1999, "Informatique",  13.9},
        {"ID3456789013", "Noah",    "Davis",    15,  3,  2002, "Chimie",        8.8},
        {"ID4567890124", "Olivia",  "Miller",   4,   7,  2001, "Physique",      10.7},
        {"ID5678901235", "Ethan",   "Wilson",   19,  1,  2000, "Histoire",      11.1},
        {"ID6789012346", "Ava",     "Moore",    30,  10, 1998, "Mathematiques", 15.6},
        {"ID7890123457", "Mason",   "Taylor",   25,  4,  2003, "Informatique",  10.0},
        {"ID8901234568", "Mia",     "Anderson", 6,   9,  2001, "Physique",      16.4},
        {"ID9012345679", "Lucas",   "Thomas",   20,  2,  2002, "Chimie",        11.9}
    };

//Structure Des Informations d'etudiants
typedef struct{
    int day;
    int month;
    int year;
}birthday;
//Structure De departemment
typedef struct{
    int IdDep;
    char NameD[255];
}Department;

//Structure Des Informations d'etudiants real qui ajouter par l'utilisateur
typedef struct{
    int UD;
    char nom[50];
    char prenom[50];
    birthday birth;
    float note_generale;
    Department Department;
}studentsInformations;

//les departemment
char dep[7][255] = {"","Biologie", "Mathematiques", "Informatique", "Chimie", "Physique", "Histoire"};

studentsInformations infos[100];


// ajouter des etudiants automatiqement dans ce programe
void AddAuto(){
    if (studentsCounter <= 0)
    {
        strcpy(infos[0].nom,students[0].name);

        strcpy(infos[0].prenom,students[0].lastName);
        strcpy(infos[0].Department.NameD,students[0].subject);
    
        infos[0].birth.year = students[0].birthYear;
        infos[0].birth.month = students[0].birthMonth;
        infos[0].birth.day = students[0].birthDay;


        infos[0].note_generale = students[0].note;
        infos[0].UD = studentsCounter;

        studentsCounter++;

        ///////////////////
        strcpy(infos[1].nom,students[1].name);

        strcpy(infos[1].prenom,students[1].lastName);
        strcpy(infos[1].Department.NameD,students[1].subject);
    
        infos[1].birth.year = students[1].birthYear;
        infos[1].birth.month = students[1].birthMonth;
        infos[1].birth.day = students[1].birthDay;


        infos[1].note_generale = students[1].note;
        infos[1].UD = studentsCounter;

        studentsCounter++;

        
        ///////////////////
        strcpy(infos[2].nom,students[2].name);

        strcpy(infos[2].prenom,students[2].lastName);
        strcpy(infos[2].Department.NameD,students[2].subject);
    
        infos[2].birth.year = students[2].birthYear;
        infos[2].birth.month = students[2].birthMonth;
        infos[2].birth.day = students[2].birthDay;


        infos[2].note_generale = students[2].note;
        infos[2].UD = studentsCounter;

        studentsCounter++;

        
        ///////////////////
        strcpy(infos[3].nom,students[3].name);

        strcpy(infos[3].prenom,students[3].lastName);
        strcpy(infos[3].Department.NameD,students[3].subject);
    
        infos[3].birth.year = students[3].birthYear;
        infos[3].birth.month = students[3].birthMonth;
        infos[3].birth.day = students[3].birthDay;


        infos[3].note_generale = students[3].note;
        infos[3].UD = studentsCounter;

        studentsCounter++;
        ///////////////////
        strcpy(infos[4].nom,students[4].name);

        strcpy(infos[4].prenom,students[4].lastName);
        strcpy(infos[4].Department.NameD,students[4].subject);
    
        infos[4].birth.year = students[4].birthYear;
        infos[4].birth.month = students[4].birthMonth;
        infos[4].birth.day = students[4].birthDay;


        infos[4].note_generale = students[4].note;
        infos[4].UD = studentsCounter;

        studentsCounter++;
        ///////////////////
        strcpy(infos[5].nom,students[5].name);

        strcpy(infos[5].prenom,students[5].lastName);
        strcpy(infos[5].Department.NameD,students[5].subject);
    
        infos[5].birth.year = students[5].birthYear;
        infos[5].birth.month = students[5].birthMonth;
        infos[5].birth.day = students[5].birthDay;


        infos[5].note_generale = students[5].note;
        infos[5].UD = studentsCounter;

        studentsCounter++;
        ///////////////////
        strcpy(infos[6].nom,students[6].name);

        strcpy(infos[6].prenom,students[6].lastName);
        strcpy(infos[6].Department.NameD,students[6].subject);
    
        infos[6].birth.year = students[6].birthYear;
        infos[6].birth.month = students[6].birthMonth;
        infos[6].birth.day = students[6].birthDay;


        infos[6].note_generale = students[6].note;
        infos[6].UD = studentsCounter;

        studentsCounter++;

        ///////////////////
        strcpy(infos[7].nom,students[7].name);

        strcpy(infos[7].prenom,students[7].lastName);
        strcpy(infos[7].Department.NameD,students[7].subject);
    
        infos[7].birth.year = students[7].birthYear;
        infos[7].birth.month = students[7].birthMonth;
        infos[7].birth.day = students[7].birthDay;


        infos[7].note_generale = students[7].note;
        infos[7].UD = studentsCounter;

        studentsCounter++;

    
        ///////////////////
        strcpy(infos[8].nom,students[8].name);

        strcpy(infos[8].prenom,students[8].lastName);
        strcpy(infos[8].Department.NameD,students[8].subject);
    
        infos[8].birth.year = students[8].birthYear;
        infos[8].birth.month = students[8].birthMonth;
        infos[8].birth.day = students[8].birthDay;


        infos[8].note_generale = students[8].note;
        infos[8].UD = studentsCounter;

        studentsCounter++;
        main();
    }

}

// Affichez tous les details de des etudiants 
void Affichez_Details(){
    for (int i = 0; i < studentsCounter; i++)
    {
        printf("------------------------------------------------------\n");
        printf("Id          > %d\n",infos[i].UD);
        printf("Date        > %d/%d/%d\n",infos[i].birth.day,infos[i].birth.month,infos[i].birth.year);
        printf("First Name  > %s\n",infos[i].nom);
        printf("Last Name   > %s\n",infos[i].prenom);
        printf("Department  > %s\n",infos[i].Department.NameD);
        printf("Note        > %.2f\n",infos[i].note_generale);
    }

    printf("\nPress Any Key To Back To Menu ...%c",getchar());
    getchar();
    main();
    
    
}

// Affichez Des statisiques de l'universite et les etudiants
void statistiques(){
    int statiqueChoix;
    printf("\t1 > Afficher le nombre total d'etudiants inscrits.\n");
    printf("\t2 > Afficher le nombre d'etudiants dans chaque departement.\n");
    printf("\t3 > Afficher les etudiants ayant une moyenne generale superieure a un certain seuil.\n");
    printf("\t4 > Afficher les 3 etudiants ayant les meilleures notes.\n");
    printf("\t5 > Afficher le nombre d'etudiants ayant reussi dans chaque departement.\n");
    scanf("%d",&statiqueChoix);
    switch (statiqueChoix)
    {
        case 1:
            printf("\nAfficher le nombre total d'etudiants inscrits.\n\n");
            printf("Le Total d'etudiants inscrit : %d\n\n",studentsCounter);
            sleep(1);
            printf("\nAppuyez sur n'importe quelle touche pour revenir au menu ...%c",getchar());
            getchar();
            main();
            break;
        case 2:
            printf("\nAfficher le nombre d'etudiants dans chaque departement.\n\n");
            int NomberChaque ;

            for (int i = 1; i < 7; i++)
            {
                NomberChaque = 0;
                for (int j = 0; j < studentsCounter; j++)
                {
                    if (strcmp(dep[i],infos[j].Department.NameD)==0)
                    {
                        NomberChaque=NomberChaque+1;
                    }
                }
                printf("Nombre De Etudiants Dans %s : %d\n",dep[i],NomberChaque);
                NomberChaque++;
                
                    
                
            }
            printf("\n");
            
            printf("\nAppuyez sur n'importe quelle touche pour revenir au menu ...%c",getchar());
            getchar();
            main();

        case 3:
            printf("Afficher les etudiants ayant une moyenne generale superieure à un certain seuil.\n\n");
            printf("Entrer Le Seuil :");
            float seuil;
            scanf("%f",&seuil);
            for (int i = 0; i < studentsCounter; i++)
            {
                if (infos[i].note_generale >= seuil){   
                    printf("Seuil : %.2f\n",infos[i].note_generale);
                }

            }
            printf("\n");
            printf("\nAppuyez sur n'importe quelle touche pour revenir au menu ...%c",getchar());
            getchar();
            main();
            
        case 4:
            system("clear");
            printf("les 3 etudiants ayant les meilleures notes.\n\n");
            
            for (int i = 0; i < studentsCounter - 1; i++) {
                for (int j = 0; j < studentsCounter - i - 1; j++) {
                    if (infos[j].note_generale < infos[j + 1].note_generale) {
                        studentsInformations temp = infos[j];
                        infos[j] = infos[j + 1];
                        infos[j + 1] = temp;
                    }
                }
            }
            for (int i = 0; i < 3 ; i++) {
                printf("ID: %d\n Name: %s %s\n Note: %.2f\n",infos[i].UD, infos[i].nom, infos[i].prenom, infos[i].note_generale);
            }
            printf("\n");
            printf("\nAppuyez sur n'importe quelle touche pour revenir au menu ...%c",getchar());
            getchar();
            main();
        case 5:
            system("clear");
            printf("Afficher le nombre d'étudiants ayant réussi dans chaque département .\n\n");
            for (int i = 0; i < studentsCounter; i++)
            {
                if (infos[i].note_generale >= 10)
                {   
                            printf("#%d : %s\n",i,infos[i].nom);
                            printf("Depart : %s\n",infos[i].Department.NameD);
                            printf("note : %f\n\n",infos[i].note_generale);
                        }
                }
                
            printf("Press Any Key To Back To Menu ...");
            getchar();
            getchar();
            main();
    }
}

// Function Pour Supprimer Un Etudiant Avec son Numero Unique 
void suppresionDeEtudiant(){
    int numeroUnique = 0;
    int indexToDelete = -1;
    printf("Entrer Le numero unique :");
    scanf("%d",&numeroUnique);
    for (int i = 0; i < studentsCounter; i++)
    {
         if(infos[i].UD == numeroUnique){
            for (int d = i; d < studentsCounter-1; d++)
            {
                infos[d] = infos[d+1];
            } 
            studentsCounter--;
            break;   
        } 
    }
    printf("\n---------------------\n");
    printf("Deleted Successfully");
    printf("\n---------------------\n");
    printf("\nPress Any Key To Back To Menu ...%c",getchar());
    getchar();
    main();
    
    

}

// Function Pour Mise a jour les informations des etudiants 
void miseajourDeEtudiant(){
    int NU;
    system("clear");
    printf("Tu es supprimmer un etudiant !!\n\n");
    printf("Entrer Le nombre de l'etudiant : ");
    scanf("%d",&NU);
    for (int i = 0; i < studentsCounter; i++)
    {
        if (NU == infos[i].UD)
        {
            printf("Modifier Les Informations De %s %s:\n\n",infos[i].nom,infos[i].prenom);
            printf("Entrer Nouveux nom               :");
            scanf("%s",infos[i].nom);
            printf("New Name      : %s\n",infos[i].nom);
            
            printf("Entrer Nouveux Prenom            :");
            scanf("%s",infos[i].prenom);
            printf("New Prenom    : %s\n",infos[i].prenom);


            printf("Entrer Nouveux date de naissance :\n");
            printf("day   :");
            scanf("%d",&infos[i].birth.day);

            printf("month :");
            scanf("%d",&infos[i].birth.month);

            printf("year  :");
            scanf("%d",&infos[i].birth.year);

            printf("Entrer Nouveux Note              :");
            scanf("%f",&infos[i].note_generale);
            printf("New Name : %.2f\n",infos[i].note_generale);
            
        }   
        
    }
    
    printf("\n---------------------\n");
    printf("Updated Successfully");
    printf("\n---------------------\n");
    printf("\nPress Any Key To Back To Menu ...%c",getchar());
    getchar();
    main();
}

// Les Opperations De Suppression et la modification des donnes des etudians
void opperations(){
    int modification;
    printf("Voulez-vous supprimer ou modifier ? \n");
    printf("1 > Supprimer \n");
    printf("2 > Modification \n");
    printf("> ");
    scanf("%d",&modification);
    switch (modification)
    {
    case 1:
        // rappel la function de suppression pour supprimer un etudiants
        suppresionDeEtudiant();
        
        break;
    case 2:
        // rappel la function de modifie pour supprimer un etudiants
        miseajourDeEtudiant();
        break;
    default:
        main();
        break;
    }
}

// Le function ajouter qui ajouter un etudiant avec les information 
void Ajouter_un_etudiant(){
    //while(getchar() != '\n');
    printf("Add Etudiant :\n\n");
    printf("Le etudiant %d\n",studentsCounter);
    infos[studentsCounter].UD = studentsCounter;
    printf("Le Nom > ");
    scanf("%s",infos[studentsCounter].nom);

    printf("Le Prenom > ");
    scanf("%s",infos[studentsCounter].prenom);
   
    printf("La Date de naissance :\n");
    printf("  |_Year :");
    scanf("%d",&infos[studentsCounter].birth.year);
    printf("  |_month :");
    scanf("%d",&infos[studentsCounter].birth.month);
    printf("  |_day :");
    scanf("%d",&infos[studentsCounter].birth.day);

    int depChoix = 0;
    printf("Choisis Departements :");
    printf("\n\t|- 1 > Biologie .\n");
    printf("\t|- 2 > Mathematiques .\n");
    printf("\t|- 3 > Informatique .\n");
    printf("\t|- 4 > Chimie .\n");
    printf("\t|- 5 > Physique .\n");
    printf("\t|- 6 > Histoire .\n");
    scanf("%d",&depChoix);

    for (int i = 0; i <= depChoix; i++)
    {
        if (i == depChoix)
        {
            strcpy(infos[studentsCounter].Department.NameD,dep[i]);
        }
    }
    
    printf("La Note Generale :");
    scanf("%f",&infos[studentsCounter].note_generale);

    printf("Les etudiants ont ete ajoutes avec succes\n\n");
    sleep(1);
    printf("Appuyez sur n'importe quelle touche pour revenir au menu ...%c",getchar());
    getchar();
    studentsCounter++;
    system("clear");
    main();
    }
    
// Function Pour calcul la moyenne general d'etudiants
void Moyenne_General(){
        float moyenne_general = 0;
        float sumNotes = 0;
        int count = 0;  
        float moyenne_Chaque_Deppartemment = 0;
        printf("Calculer la moyenne generale :\n\n");
        for (int i = 1; i < 7; i++)
        {   
            for (int j = 0; j < studentsCounter; j++)
            {
                if (strcmp(dep[i],infos[j].Department.NameD)==0)
                {   
                    sumNotes += infos[i].note_generale;
                    count++;
                }
                   
            }

            
            //condition pour confirmer la note > 0
            if (count > 0) {
                float moyenne_Chaque_Deppartemment = sumNotes / count;
                printf("La note generale de departement %s : %.2f", dep[i], moyenne_Chaque_Deppartemment);
            } else {
                printf("La note generale de departement %s : 0.00", dep[i]);
            }
            printf("\n");

        }
        sleep(1);
        printf("\nAppuyez sur n'importe quelle touche pour revenir au menu ...%c",getchar());
        getchar();
        main();
    }

// function pour rechercher avec le nom ou la departement
void searchBy(){
        printf("Rechercher un etudiant par : \n");
        int choixRecherche;
        char nomRecherche[50];
        char departement[50];
        printf("1 > Le Nom : \n");
        printf("2 > La departement  : \n > ");
        scanf("%d",&choixRecherche);
        switch (choixRecherche)
        {
        //case 1 pour rechercher avec le nom 
        case 1:
            printf("Entrer Le Nom : ");
            scanf("%s",&nomRecherche);
            for (int i = 0; i < studentsCounter; i++)
            {
                if (strcasecmp(infos[i].nom ,nomRecherche)==0 || strcasecmp(infos[i].prenom ,nomRecherche)==0)
                {
                    printf("------------------------------------------------------\n");
                    printf("Etudiant Exists :\n");
                    printf("------------------------------------------------------\n");
                    printf("Id          > %d\n",infos[i].UD);
                    printf("Date        > %d/%d/%d\n",infos[i].birth.day,infos[i].birth.month,infos[i].birth.year);
                    printf("First Name  > %s\n",infos[i].nom);
                    printf("Last Name   > %s\n",infos[i].prenom);
                    printf("Department  > %s\n",infos[i].Department.NameD);
                    printf("Note        > %.2f\n",infos[i].note_generale);
                }
                
            }
            break;

        //case 2 pour rechercher les Etudiant avec la Departemet 
        case 2:
            printf("Entrer La Departemet : ");
            int EtudiantIci = 0;
            scanf("%s",&nomRecherche);
            printf("------------------------------------------------------\n");
            printf(" %s :\n",nomRecherche);
            printf("------------------------------------------------------\n");

            for (int i = 0; i < studentsCounter; i++)
            {
                if (strcasecmp(infos[i].Department.NameD ,nomRecherche)==0)
                {
                    
                    printf("Id          > %d\n",infos[i].UD);
                    printf("Date        > %d/%d/%d\n",infos[i].birth.day,infos[i].birth.month,infos[i].birth.year);
                    printf("First Name  > %s\n",infos[i].nom);
                    printf("Last Name   > %s\n",infos[i].prenom);
                    printf("Department  > %s\n",infos[i].Department.NameD);
                    printf("Note        > %.2f\n\n\n",infos[i].note_generale);
                    EtudiantIci++;
                }
            }
            printf("Le Total D'etudiants dans cet deppartemment : %d\n",EtudiantIci);

            if (EtudiantIci = 0)
            {
                printf("No one In This Deppartement");
            }
            


        }
        sleep(1);
        printf("\nAppuyez sur n'importe quelle touche pour revenir au menu ...%c",getchar());
        getchar();
        main();
}

// la role de cet function c'est collecter  tous les function pour les opperation de main function pour l'organisation 
void CaseSwitch(){
    switch (choix)
    {
        //case 1 pour ajouter
    case 1:
        system("clear");
        Ajouter_un_etudiant();
        break;

        //case 2 pour Supprimmer ou modifier
    case 2:
        system("clear");
        opperations();
        break;

        //case 3 pour Afficher les details
    case 3:
        system("clear");
        Affichez_Details();
        break;

        //case 4 pour Afficher la moyenner generae
    case 4:
        system("clear");
        Moyenne_General();
        break;

        //case 5 pour Afficher Les Statistiques
    case 5:
        system("clear");
        statistiques();
        break;
        
        //case 6 pour la recherche avec le nom ou la deppartement
    case 6:
        system("clear");
        searchBy();
        break;

        //La dernier case pour ferme le programe
    case 0:
        system("clear");
        exit(0);

    default:
        main();
        break;
    }
}

// le menu Pricipal qui affichera premierment de l'utilisateur
void menu(){
    system("clear");
    printf("1 > Ajouter un etudiant\n");
    printf("2 > Modifier ou supprimer un etudiant\n");
    printf("3 > Afficher les details d'un etudiant\n");
    printf("4 > Calculer la moyenne generale\n");
    printf("5 > Statistiques\n");
    printf("6 > Rechercher un etudiant \n");
    printf("7 > Trier un etudiant \n");
    printf("0 > Exit\n");
    printf("La command > ");
    scanf("%d",&choix);
    // ici la function de organisation les switch cases
    CaseSwitch();
} 

// le main function qui execute deux function premier function pour ajouter automatiqement 
// et la deuxieme function pourafficher le menu function . 
int main(){
    AddAuto();
    menu();
    return 0;
}