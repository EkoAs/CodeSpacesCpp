#include <iostream>
#include <cstdlib>
using namespace std;

struct NODE{
    int NIM;
    int UTS;
    int UAS;
    NODE *NEXT;
};
int jml_node=0;
NODE *HEAD_N =NULL;
NODE *LAST_N=NULL;
NODE *CREATE_NODE (int nim, int uts, int uas);
void ShowLIST (NODE *Penunjuk);
void insertFIRST(int nim, int uts, int uas);
void insertLAST(int nim, int uts, int uas);
void DeleteFIRST();
void DeleteLAST();

int main(){
    int nim, uts, uas;
    int pilih;
    do{
        system("cls");
        cout<<"Perintah pada Linked List:"<<endl;
        cout<<"---------------------------------"<<endl;
        cout<<"1. Insert First"<<endl<<"2. Delete First"<<endl<<"3. Insert Last"<<endl<<"4. Delete Last"<<endl<<"5. Exit"<<endl;
        cout<<"------------------------------"<<endl;
        cout<<"Current List :"<<endl;
        ShowLIST(HEAD_N);
        cout<<endl<<"------------------------------"<<endl;
        cout<<"Pilihan : ";
        cin >>pilih;
        switch (pilih){
        case 1 : {
            cout<<endl<<endl;
            cout<<"Fungsi Insert First"<<endl;
            cout<<"------------------------------"<<endl;
            cout<<"Input NIM : ";
            cin >>nim;
            cout<<"Input Nilai UTS : ";
            cin >>uts;
            cout<<"Input Nilai UAS : ";
            cin >>uas;
            insertFIRST(nim, uts, uas);
            break;
            }
        case 2 : {
            cout<<endl<<endl;
            cout<<"Fungsi Delete First"<<endl;
            cout<<"------------------------------"<<endl;
            DeleteFIRST();
            break;
            }
        case 3 : {
            cout<<endl<<endl;
            cout<<"Fungsi Insert Last"<<endl;
            cout<<"------------------------------"<<endl;
            cout<<"Input NIM : ";
            cin >>nim;
            cout<<"Input Nilai UTS : ";
            cin >>uts;
            cout<<"Input Nilai UAS : ";
            cin >>uas;
            insertLAST(nim, uts, uas);
            break;
            }
        case 4 : {
            cout<<endl<<endl;
            cout<<"Fungsi Delete Last"<<endl;
            cout<<"------------------------------"<<endl;
            DeleteLAST();
            break;
            }
        case 5 : {
            cout<<endl<<endl;
            cout<<"Program selesai"<<endl;
            cout<<"------------------------------"<<endl;
            break;
            }
        default :{
            cout<<"Pilihan salah.."<<endl<<endl;
            }
        }
        cout<<endl<<"Press any key.."<<endl<<endl;
        cin.ignore();
        cin.get();
    }while(pilih!=5);
    return 0;
}

NODE *CREATE_NODE (int nim, int uts, int uas){
    NODE *newNODE = new NODE;
    newNODE->NIM=nim;
    newNODE->UTS =uts;
    newNODE->UAS= uas;
    newNODE->NEXT=NULL;
    return newNODE;
};

void ShowLIST (NODE *Penunjuk){
    if (jml_node == 0){
        cout << "Link List Kosong...";
    }else{
        while(Penunjuk != NULL){
            cout<<Penunjuk->NIM<<"  "<<Penunjuk->UTS<<"  "<<Penunjuk->UAS<<endl;
            Penunjuk = Penunjuk->NEXT;
        }
        cout<<endl;
        cout<<"Jumlah NODE ada : "<<jml_node;
    }
}

void insertFIRST(int nim, int uts, int uas){
    NODE *TEMP_N = NULL;
    TEMP_N = CREATE_NODE(nim, uts, uas);
    if (HEAD_N == NULL){
        HEAD_N = TEMP_N;
        LAST_N = TEMP_N;
    }else{
        TEMP_N->NEXT = HEAD_N;
        HEAD_N = TEMP_N;
    }
    jml_node++;
    TEMP_N = NULL;
}

void insertLAST(int nim, int uts, int uas){
    NODE *TEMP_N = NULL;
    TEMP_N = CREATE_NODE(nim, uts, uas);
    if (HEAD_N == NULL){
        HEAD_N = TEMP_N;
        LAST_N = TEMP_N;
    }else{
        LAST_N->NEXT = TEMP_N;
        LAST_N = TEMP_N;
    }
    jml_node++;
    TEMP_N = NULL;
}

void DeleteFIRST(){
    NODE *TEMP_N = NULL;
    if (HEAD_N == NULL){
        cout<<endl;
        cout<<"Delete NODE tidak bisa dilakukan karena Linked List kosong";
        cout<<endl;
    }else{
        TEMP_N = HEAD_N;
        if(TEMP_N->NEXT == NULL){
            HEAD_N=NULL;
            LAST_N=NULL;
        }else{
            HEAD_N=TEMP_N->NEXT;
            TEMP_N->NEXT=NULL;
        }
        delete(TEMP_N);
        jml_node--;
    }
}

void DeleteLAST(){
    NODE *TEMP_N = NULL;
    if (HEAD_N == NULL){
        cout<<endl;
        cout<<"Delete NODE tidak bisa dilakukan karena Linked List kosong";
        cout<<endl;
    }else{
        TEMP_N = HEAD_N;
        if(TEMP_N->NEXT == NULL){
            HEAD_N=NULL;
            LAST_N=NULL;
        }else{
            while (TEMP_N->NEXT->NEXT!=NULL)
            {
                TEMP_N=TEMP_N->NEXT;
            }
            LAST_N=TEMP_N;
            TEMP_N=TEMP_N->NEXT;
            LAST_N->NEXT=NULL;
        }
        delete(TEMP_N);
        jml_node--;
    }
}