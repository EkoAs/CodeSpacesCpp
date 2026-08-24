#include <iostream>
#include <string>
using namespace std;

struct Engine{
    int hp;
    float cc;
};
struct Type{
    string model;
    string company;
};
struct Armor{
    string material;
    int ketebalan;
};

struct Tank{
    string name;
    Engine start_engine;
    Armor body_armor;
    Type type_tank;
    int hp;      
    int damage;  
};

// Prototypeee
Tank musuh(int kode);
void user_input(Tank &myTank);
void tampilkan(const Tank &myTank);
void garis();
void in_game(Tank &myTank); 
void battle(Tank &myTank, Tank &enemyTank); 

int main(){
    Tank myTank;
    user_input(myTank);
    in_game(myTank); 

    cout <<endl;
    for(int i=0; i<=35;++i){
        cout<<'=';
    }
    cout << endl << "========== Tank Status =========="<<endl;
    for(int i=0;i<=35;++i){
        cout<<'=';
    }
    cout<<endl;
    tampilkan(myTank);
    
    int pilih;
    cout << "\nPilih musuh (1/2/3), ketik 0 untuk keluar: ";
    cin >> pilih;
    Tank enemy = musuh(pilih);

    if (enemy.name == "BATAL") {
        cout << "\nGame disconnect from server......... " << endl;
        return 0; 
    }
    if (enemy.name == "Unknown") {
        cout << "\nMusuh tidak ditemukan!/ Input salah." << endl;
        return 0;
    }

    cout << endl;
    for(int i=0;i<=35;++i){
        cout<<'=';
    }
    cout << endl;
    cout << "========== Enemy Status =========="<< endl;
    for(int i = 0; i<=35;++i){
        cout << '=';
    }
    cout << endl;
    tampilkan(enemy);
    battle(myTank, enemy);

    return 0;
}

Tank musuh(int kode){
    // {Nama, {EngineHP, CC}, {Material, Tebal}, {Model, Company}, GameHP, GameDmg}
    switch(kode){
        case 1: return {"Panther M90", {900, 450}, {"Steel", 850}, {"Destroyer", "German"}, 2000, 300};
        case 2: return {"T80 Russia", {1100, 550}, {"Composite", 1000}, {"Medium", "Russia"}, 2500, 450};
        case 3: return {"Abrams USA", {1500, 750}, {"Composite", 1200}, {"Heavy", "USA"}, 3000, 600};
        case 4: return {"Leopard 2",{1500,6000},{"High Composite", 1500},{"Heavy", "German"}, 4500, 1200 }
        case 5: return {"T90",{1250,600},{"Composite", 1500},{"Heavy", "German"}, 4500, 1200 }
        case 0: return {"BATAL", {0,0}, {"None",0}, {"None","None"}, 0, 0};
    }
    return {"Unknown", {0, 0}, {"None", 0}, {"None", "None"}, 0, 0};
}


void user_input(Tank &myTank){
    cout << "Masukan nama tank: ";
    getline(cin, myTank.name);
    
    cout << "Masukan HP Engine tank: ";
    cin >> myTank.start_engine.hp;
    cin.ignore(); 
    cout << "Masukan model tank (ex: Prototype): "; 
    getline(cin, myTank.type_tank.model);
    
    myTank.start_engine.cc = myTank.start_engine.hp * 0.5;

    cout << "Masukan Material Tank: ";
    getline(cin, myTank.body_armor.material);
    
    cout << "Masukan Ketebalan Armor Tank: ";
    cin >> myTank.body_armor.ketebalan;
}

void tampilkan(const Tank &myTank){
    garis();
    cout << "Nama Tank      : " << myTank.name << endl;
    cout << "Kategori       : " << myTank.type_tank.model << endl; // Ini hasil sorting logic
    cout << "Engine Power   : " << myTank.start_engine.hp << " hp" << endl;
    cout << "Engine CC      : " << myTank.start_engine.cc << " cc" << endl;
    cout << "Armor Material : " << myTank.body_armor.material << endl;
    cout << "Armor Ketebalan: " << myTank.body_armor.ketebalan << " mm" << endl;
    cout << ">> BATTLE MODE <<" << endl;
    cout << "Total HP       : " << myTank.hp << endl;
    cout << "Total Damage   : " << myTank.damage << endl;
    garis();
}

void in_game(Tank &myTank){
    string kategori;
    int hp_your = 0;
    float damage_calc = 0;

    if(myTank.start_engine.hp <= 500){
        kategori = "Light Tank";
        if(myTank.body_armor.ketebalan <= 900){
            hp_your = 1200;
            damage_calc = ((hp_your/2.0)- myTank.body_armor.ketebalan)+10;
        }else{
            hp_your = 2500;
            damage_calc = ((hp_your/2.0)- myTank.body_armor.ketebalan)+10;
        }
    }else if(myTank.start_engine.hp <= 1500){
        kategori = "Medium Tank";
        if(myTank.body_armor.ketebalan <= 1200){
            hp_your = 1500;
            damage_calc = ((hp_your/2.0)- myTank.body_armor.ketebalan)+50;
        }else{
            hp_your = 2500;
            damage_calc = ((hp_your/2.0)- myTank.body_armor.ketebalan)+40;
        }
    }else if(myTank.start_engine.hp > 1500 && myTank.start_engine.hp <= 2000){
        kategori = "Destroyer Tank";
        if(myTank.body_armor.ketebalan <= 1200){
            hp_your = 1800;
            damage_calc = ((hp_your/2.0)- myTank.body_armor.ketebalan)+30;
        }else{
            hp_your = 2500;
            damage_calc = ((hp_your/2.0)- myTank.body_armor.ketebalan)+70;
        }
    }else if(myTank.start_engine.hp > 2000){
        kategori = "Heavy Tank";
        if(myTank.body_armor.ketebalan >= 1200){
            hp_your = 2500;
            damage_calc = ((hp_your/2.0)- myTank.body_armor.ketebalan)+200;
        }else{
            hp_your = 2500;
            damage_calc = ((hp_your/2.0)- myTank.body_armor.ketebalan)+1500;
        }
    }

    
    myTank.type_tank.model = kategori;
    myTank.hp = hp_your;
    
   
    if(damage_calc < 0) damage_calc = 10; 
    myTank.damage = (int)damage_calc;
}

void battle(Tank &myTank, Tank &enemyTank){
    cout << "\n=== PERTEMPURAN DIMULAI! ===" << endl;
    cout << myTank.name << " VS " << enemyTank.name << endl;
    
  
    while(myTank.hp > 0 && enemyTank.hp > 0){
        enemyTank.hp -= myTank.damage;
        cout << ">> Anda menembak! Musuh sisa HP: " << enemyTank.hp << endl;
        
        if(enemyTank.hp <= 0) break;

        // Musuhh
        myTank.hp -= enemyTank.damage;
        cout << "<< Musuh menembak! HP Anda sisa: " << myTank.hp << endl;
    }

    cout << "\n=== HASIL PERTEMPURAN ===" << endl;
    if(myTank.hp > 0){
        cout << "SELAMAT! " << myTank.name << " MEMENANGKAN PERTEMPURAN!" << endl;
    } else {
        cout << "GAME OVER! Tank anda hancur." << endl;
    }
    garis();
}

void garis(){
    for(int i = 0; i<=30; ++i){
        cout << '=';
    }
    cout << endl;
}