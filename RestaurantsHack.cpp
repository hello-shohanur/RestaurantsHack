#include<iostream>
#include<iterator>
#include<algorithm>
#include<list>
using namespace std;

int phn, pin;
void login();
void login_pro();
void signup();
void dashboard();
void fooditem();
void order();
void payment();
void about();
void vegetables();                                       // © 2021-2022, Restaurant's Hack.
void protein();                                         // All Rights Reserved
void fruits();                                         // @author: Shohanur Rahman
void grains();                                        //GitHub: https://github.com/shohanurr3401/RestaurantsHack
void dairy();
//Vegetables List
void spinach();
void carrots();
void broccoli();
void garlic();
void brussels();
void kale();
void green_peas();
void swiss_chard();
void ginger();
void asparagus();
// Protein List
void egg();
void almonds();
void chicken_breast();
void oats();
void cottage_cheese();
void greek_yogurt();
void leen_beaf();
void tuna();
void ezekiel_bread();
void milk();
// Fruits List
void strawberries();
void oranges();
void limes();
void grapefruits();
void blackberries();
void apples();
void pomegranate();
void mango();
void pineapple();
// Grains List
void barley();
void corn();
void oats1();
void popcorn();
void rice();
void rye();
void wheat();
void buck_wheat();
void millet();
void sorghum();
// Dairy List
void dairying();
void cheese();
void milk1();
void icecream();
void butter();
void yogurt();
void sherbet();
void custard();
void cream();


int main(){
    cout << endl;
    cout << "\t\t------------------------" << endl;
    cout << "\t\t|   Restaurent's Hack  |" << endl;
    cout << "\t\t------------------------" << endl;
    cout << "\t ---------------       ----------------" << endl;
    cout << "\t |    LogIn    |       |    SignUp    |" << endl;
    cout << "\t ---------------       ----------------" << endl;
    cout << "\n 1. LogIn \n 2. SignUp\n\n" << " => ";
    int inp;
    cin >> inp;
    while (inp != 1 && inp != 2){
        cout << "Invalid input! Please, try again..." << "\n==>";
        cin >> inp;
    }
    switch (inp){
        case 1:
        login();
        break;

        case 2:
        signup();
        break;

    }
}


void login(){
    cout << "\t----------------" << endl;
    cout << "\t|    LogIn     |" << endl;
    cout << "\t----------------" << endl;
    cout << " Enter the phone number: " << endl << " =>  ";
    int phn1;
    cin >> phn1;
    cout << " Enter the pin: " << endl << " =>  ";
    int pin1;
    cin >> pin1;
    cout << "\n LogIn successful!" << endl;

    dashboard();
}


void login_pro(){
    cout << "\t----------------" << endl;
    cout << "\t|    LogIn     |" << endl;
    cout << "\t----------------" << endl;
    cout << " Enter the phone number: " << endl << " =>  ";
    int phn1;
    cin >> phn1;
    while (phn1 != phn){
        cout << "Invalid phone number! Please, try again..." << endl << " =>  ";
        cin >> phn1;
    }
    cout << " Enter the pin: " << endl << " =>  ";
    int pin1;
    cin >> pin1;
    while (pin1 != pin){
        cout << " Invalid pin! Please, try again..." << endl << " =>  ";
        cin >> pin1;
    }
    cout << " LogIn successful! " << endl;

    dashboard();
}


void signup(){

    cout << "\t----------------" << endl;
    cout << "\t|    SignUp    |" << endl;
    cout << "\t----------------" << endl;
    string name;
    cout << " Enter your name: " << endl << " =>  ";
    cin >> name;
    cout << " Enter your phone number: " << endl << " =>  ";
    cin >> phn;
    cout << " Enter a pin: " << endl << " =>  ";
    cin >> pin;
    cout << " Enter the confirmation code: " << endl << " =>  ";
    int otp;
    cin >> otp;
    while (otp != 3401){
        cout << " Invalid confirmation code! Please, try again..." << endl << " =>  ";
        cin >> otp;
    }
    cout << "\n Successfully done! " << endl;
    cout << "\n LogIn now.." << endl;

    login_pro();
}


void dashboard(){
    cout << "\t------------------" << endl;
    cout << "\t|   Dashboard    |" << endl;
    cout << "\t------------------" << endl;
    cout << " 1.Food Item \n 2.Order \n 3.Payment \n 4.About" << endl << " =>  ";
    int dash;
    cin >> dash;
    while (dash != 1 && dash != 2 && dash != 3 && dash != 4 && dash != 5){
        cout << " Invalid input! Please, try again..." << "\n =>  ";
        cin >> dash;
    }
    switch (dash){
    case 1:
        fooditem();
        break;

    case 2:
        order();
        break;

    case 3:
        payment();
        break;

    case 4:
        about();
        break;

    }
}


void fooditem(){
    cout << "\n ||=== Food Item ===||" << endl;
    cout << " 1.Vegetables \n 2.Proteins \n 3.Fruits \n 4.Grains \n 5.Dairy \n 0.Back" << "\n =>  ";
    int fi;
    cin >> fi;
    while (fi != 0 && fi != 1 && fi != 2 && fi != 3 && fi != 4 && fi != 5){
        cout << " Invalid input! Please, try again..." << "\n =>  ";
        cin >> fi;
    }
    switch(fi){
    case 0:
        dashboard();
        break;

    case 1:
        vegetables();
        break;

    case 2:
        protein();
        break;

    case 3:
        fruits();
        break;

    case 4:
        grains();
        break;

    case 5:
        dairy();
        break;
    }

}



void vegetables(){
    cout << "\n |--- Vegetables ---|" << endl;
    cout << " 1.Spinach \n 2.Carrots \n 3.Broccoli \n 4.Garlic \n 5.Brussels Sprouts \n 6.Kale \n 7.Green Peas \n 8.Swiss Chard \n 9.Ginger \n 10.Asparagus \n 0.Back" << "\n =>  ";
    int veg;
    cin >> veg;
    while (veg != 0 && veg != 1 && veg != 2 && veg != 3 && veg != 4 && veg != 5 && veg != 6 && veg != 7 && veg != 8 && veg != 9 && veg != 10){
        cout << " Invalid input! Please, try again..." << "\n =>  ";
        cin >> veg;
    }
    switch(veg){

    case 0:
        fooditem();
        break;

    case 1:
        spinach();
        break;

    case 2:
        carrots();
        break;

    case 3:
        broccoli();
        break;

    case 4:
        garlic();
        break;

    case 5:
        brussels();
        break;

    case 6:
        kale();
        break;

    case 7:
        green_peas();
        break;

    case 8:
        swiss_chard();
        break;

    case 9:
        ginger();
        break;

    case 10:
        asparagus();
        break;

    }

}


void spinach(){
    cout << " --- Spinach ---" << endl;
    cout << " Product code: 101" << endl;
    cout << " Amount: 1 Kg" << endl;
    cout << " Price: 34.50  BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        vegetables();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }

}


void carrots(){
    cout << " --- Carrots ---" << endl;
    cout << " Product code: 102" << endl;
    cout << " Amount: 1 Kg" << endl;
    cout << " Price: 28.50  BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        vegetables();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void broccoli(){
    cout << " --- Broccoli ---" << endl;
    cout << " Product code: 103" << endl;
    cout << " Amount: 1 Kg" << endl;
    cout << " Price: (45-110)  BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        vegetables();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void garlic(){
    cout << " --- Garlic ---" << endl;
    cout << " Product code: 104" << endl;
    cout << " Amount: 1 Kg" << endl;
    cout << " Price: 82  BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        vegetables();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void brussels(){
    cout << " --- Brussels ---" << endl;
    cout << " Product code: 105" << endl;
    cout << " Amount: 1 Kg" << endl;
    cout << " Price: 180  BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        vegetables();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void kale(){
    cout << " --- Kale ---" << endl;
    cout << " Product code: 106" << endl;
    cout << " Amount: 1 Kg" << endl;
    cout << " Price: 68.35  BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        vegetables();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void green_peas(){
    cout << " --- Green Peas ---" << endl;
    cout << " Product code: 107" << endl;
    cout << " Amount: 1 Kg" << endl;
    cout << " Price: 90  BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        vegetables();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void swiss_chard(){
    cout << " --- Swiss Chard ---" << endl;
    cout << " Product code: 108" << endl;
    cout << " Amount: 1 Ib" << endl;
    cout << " Price: 296  BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        vegetables();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void ginger(){
    cout << " --- Ginger ---" << endl;
    cout << " Product code: 109" << endl;
    cout << " Amount: 1 Kg" << endl;
    cout << " Price: 130  BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        vegetables();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void asparagus(){
    cout << " --- Asparagus ---" << endl;
    cout << " Product code: 110" << endl;
    cout << " Amount: 1 Kg" << endl;
    cout << " Price: 180  BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        vegetables();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}



void protein(){
    cout << "\n |--- Protein ---|" << endl;
    cout << " 1.Egg \n 2.Almonds \n 3.Chicken Breast \n 4.Oats \n 5.Cottage Cheese \n 6.Greek Yogurt \n 7.Lean Beaf \n 8.Tuna \n 9.Ezekiel Bread \n 10.Milk \n 0.Back" << "\n =>  ";
    int proti;
    cin >> proti;
    while (proti != 0 && proti != 1 && proti != 2 && proti != 3 && proti != 4 && proti != 5 && proti != 6 && proti != 7 && proti != 8 && proti != 9 && proti != 10){
        cout << " Invalid input! Please, try again..." << "\n =>  ";
        cin >> proti;
    }
    switch(proti){

    case 0:
        fooditem();
        break;

    case 1:
        egg();
        break;

    case 2:
        almonds();
        break;

    case 3:
        chicken_breast();
        break;

    case 4:
        oats();
        break;

    case 5:
        cottage_cheese();
        break;

    case 6:
        greek_yogurt();
        break;

    case 7:
        leen_beaf();
        break;

    case 8:
        tuna();
        break;

    case 9:
        ezekiel_bread();
        break;

    case 10:
        milk();
        break;
    }

}


void egg(){
    cout << "--- Egg ---" << endl;
    cout << "Product code: 111" << endl;
    cout << "Amount: 1 dozen" << endl;
    cout << "Price: 120  BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        protein();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}

void almonds(){
    cout << "--- Almonds ---" << endl;
    cout << "Product code: 112" << endl;
    cout << "Amount: 1 Kg" << endl;
    cout << "Price: 750  BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        protein();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void chicken_breast(){
    cout << "--- Chicken Breast ---" << endl;
    cout << "Product code: 113" << endl;
    cout << "Amount: 1 Kg" << endl;
    cout << "Price: 320  BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        protein();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void oats(){
    cout << "--- Oats ---" << endl;
    cout << "Product code: 114" << endl;
    cout << "Amount: 1 Kg" << endl;
    cout << "Price: 200  BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        protein();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void cottage_cheese(){
    cout << "--- Cottage Cheese ---" << endl;
    cout << "Product code: 115" << endl;
    cout << "Amount: 1 Pounds" << endl;
    cout << "Price: 750-900  BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        protein();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void greek_yogurt(){
    cout << "--- Greek Yogurt ---" << endl;
    cout << "Product code: 116" << endl;
    cout << "Amount: 1 Kg" << endl;
    cout << "Price: 180  BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        protein();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void leen_beaf(){
    cout << "--- Leen Beaf ---" << endl;
    cout << "Product code: 117" << endl;
    cout << "Amount: 1 Kg" << endl;
    cout << "Price: 550-580  BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        protein();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}

void tuna(){
    cout << "--- Tuna ---" << endl;
    cout << "Product code: 118" << endl;
    cout << "Amount: 1 Kg" << endl;
    cout << "Price: 50-65  BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        protein();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void ezekiel_bread(){
    cout << "--- Ezekiel Bread ---" << endl;
    cout << "Product code: 119" << endl;
    cout << "Amount: 1 Kg" << endl;
    cout << "Price: 320-360  BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        protein();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void milk(){
    cout << "--- Milk ---" << endl;
    cout << "Product code: 120" << endl;
    cout << "Amount: 1 liter" << endl;
    cout << "Price: 84  BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        protein();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}




void fruits(){
    cout << "\n |--- Fruits ---|" << endl;
    cout << " 1.Strawberries \n 2.Oranges \n 3.Limes \n 4.Grapefruit \n 5.Blackberries \n 6.Apples \n 7.Pomegranate \n 8.Mango \n 9.Pineapple \n 0.Back" << "\n =>  ";
    int fru;
    cin >> fru;
    while (fru != 0 && fru != 1 && fru != 2 && fru != 3 && fru != 4 && fru != 5 && fru != 6 && fru != 7 && fru != 8 && fru != 9){
        cout << " Invalid input! Please, try again..." << "\n =>  ";
        cin >> fru;
    }

    switch(fru){
    case 0:
        fooditem();
        break;

    case 1:
        strawberries();
        break;

    case 2:
        oranges();
        break;

    case 3:
        limes();
        break;

    case 4:
        grapefruits();
        break;

    case 5:
        blackberries();
        break;

    case 6:
        apples();
        break;

    case 7:
        pomegranate();
        break;

    case 8:
        mango();
        break;

    case 9:
        pineapple();
        break;

    }

}


void strawberries(){
    cout << "--- Strawberries ---" << endl;
    cout << "Product code: 131" << endl;
    cout << "Amount: 1 Kg" << endl;
    cout << "Price: 115-300 BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        fruits();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void oranges(){
    cout << "--- Oranges ---" << endl;
    cout << "Product code: 132" << endl;
    cout << "Amount: 1 Kg" << endl;
    cout << "Price: 200 BDT" << endl;
        cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        fruits();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void limes(){
    cout << "--- Limes ---" << endl;
    cout << "Product code: 133" << endl;
    cout << "Amount: 1 Kg" << endl;
    cout << "Price: 190 BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        fruits();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }

}


void grapefruits(){
    cout << "--- Grapefruits ---" << endl;
    cout << "Product code: 134" << endl;
    cout << "Amount: 1 Kg" << endl;
    cout << "Price: 110 BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        fruits();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void blackberries(){
    cout << "--- Blackberries ---" << endl;
    cout << "Product code: 135" << endl;
    cout << "Amount: 1 Kg" << endl;
    cout << "Price: 800 BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        fruits();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void apples(){
    cout << "--- Apples ---" << endl;
    cout << "Product code: 136" << endl;
    cout << "Amount: 1 Kg" << endl;
    cout << "Price: 190 BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        fruits();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void pomegranate(){
    cout << "--- Pomegranate ---" << endl;
    cout << "Product code: 137" << endl;
    cout << "Amount: 1 Kg" << endl;
    cout << "Price: 190 BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        fruits();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void mango(){
    cout << "--- Mango ---" << endl;
    cout << "Product code: 138" << endl;
    cout << "Amount: 1 Kg" << endl;
    cout << "Price: 90 BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        fruits();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void pineapple(){
    cout << "--- Pineapple ---" << endl;
    cout << "Product code: 139" << endl;
    cout << "Amount: 1 Kg" << endl;
    cout << "Price: 55 BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        fruits();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}



void grains(){
    cout << "\n |--- Grains ---|" << endl;
    cout << " 1.Barley \n 2.Corn \n 3.Oats \n 4.Popcorn \n 5.Rice \n 6.Rye \n 7.Wheat \n 8.Buck Wheat \n 9.Millet \n 10.Sorghum \n 0.Back" << "\n =>  ";
    int gra;
    cin >> gra;
    while (gra != 0 && gra != 1 && gra != 2 && gra != 3 && gra != 4 && gra != 5 && gra != 6 && gra != 7 && gra != 8 && gra != 9 && gra != 10){
        cout << " Invalid input! Please, try again..." << "\n =>  ";
        cin >> gra;
    }

    switch (gra){
    case 0:
        fooditem();
        break;

    case 1:
        barley();
        break;

    case 2:
        corn();
        break;

    case 3:
        oats1();
        break;

    case 4:
        popcorn();
        break;

    case 5:
        rice();
        break;

    case 6:
        rye();
        break;

    case 7:
        wheat();
        break;

    case 8:
        buck_wheat();
        break;

    case 9:
        millet();
        break;

    case 10:
        sorghum();
        break;

    }

}


void barley(){
    cout << "--- Barley ---" << endl;
    cout << "Product code: 121" << endl;
    cout << "Amount: 1 Kg" << endl;
    cout << "Price: 100  BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        grains();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void corn(){
    cout << "--- Corn ---" << endl;
    cout << "Product code: 122" << endl;
    cout << "Amount: 1 Kg" << endl;
    cout << "Price: 150  BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        grains();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void oats1(){
    cout << "--- Oats ---" << endl;
    cout << "Product code: 123" << endl;
    cout << "Amount: 1 Kg" << endl;
    cout << "Price: 571  BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        grains();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void popcorn(){
    cout << "--- Popcorn ---" << endl;
    cout << "Product code: 124" << endl;
    cout << "Amount: 1 Kg" << endl;
    cout << "Price: 110  BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        grains();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void rice(){
    cout << "--- Rice ---" << endl;
    cout << "Product code: 125" << endl;
    cout << "Amount: 1 Kg" << endl;
    cout << "Price: 104  BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        grains();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void rye(){
    cout << "--- Rye ---" << endl;
    cout << "Product code: 126" << endl;
    cout << "Amount: 1 Kg" << endl;
    cout << "Price: 90 BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        grains();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void wheat(){
    cout << "--- Wheat ---" << endl;
    cout << "Product code: 127" << endl;
    cout << "Amount: 1 Kg" << endl;
    cout << "Price: 42  BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        grains();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void buck_wheat(){
    cout << "--- Buck Wheat ---" << endl;
    cout << "Product code: 128" << endl;
    cout << "Amount: 1 Kg" << endl;
    cout << "Price: 100  BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        grains();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void millet(){
    cout << "--- Millet ---" << endl;
    cout << "Product code: 129" << endl;
    cout << "Amount: 1 Kg" << endl;
    cout << "Price: 300  BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        grains();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void sorghum(){
    cout << "--- Sorghum ---" << endl;
    cout << "Product code: 130" << endl;
    cout << "Amount: 1 Kg" << endl;
    cout << "Price: 5319  BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        grains();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}



void dairy (){
    cout << "\n |--- Dairy ---|" << endl;
    cout << " 1.Dairying \n 2.cheese \n 3.Milk \n 4.Ice Cream \n 5.Butter \n 6.Yogurt \n 7.Sherbet \n 8.Custard \n 9.Cream \n 0.Back" << "\n =>  ";
    int dai;
    cin >> dai;
    while (dai != 0 && dai != 1 && dai != 2 && dai != 3 && dai != 4 && dai != 5 && dai != 6 && dai != 7 && dai != 8 && dai != 9){
        cout << " Invalid input! Please, try again..." << "\n =>  ";
        cin >> dai;
    }

    switch (dai){

    case 0:
        fooditem();
        break;

    case 1:
        dairying();
        break;

    case 2:
        cheese();
        break;

    case 3:
        milk1();
        break;

    case 4:
        icecream();
        break;

    case 5:
        butter();
        break;

    case 6:
        yogurt();
        break;

    case 7:
        sherbet();
        break;

    case 8:
        custard();
        break;

    case 9:
        cream();
        break;


    }

}

void dairying(){
    cout << "--- Dairying ---" << endl;
    cout << "Product code: 140" << endl;
    cout << "Amount: 1 Kg" << endl;
    cout << "Price: 200 BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        dairy();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void cheese(){
    cout << "--- Cheese ---" << endl;
    cout << "Product code: 141" << endl;
    cout << "Amount: 1 Kg" << endl;
    cout << "Price: 15 BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        dairy();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void milk1(){
    cout << "--- milk ---" << endl;
    cout << "Product code: 142" << endl;
    cout << "Amount: 1 Kg" << endl;
    cout << "Price: 90 BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        dairy();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void icecream(){
    cout << "--- Ice Cream ---" << endl;
    cout << "Product code: 143" << endl;
    cout << "Amount: 1 Kg" << endl;
    cout << "Price: 29 BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        dairy();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void butter(){
    cout << "--- Butter ---" << endl;
    cout << "Product code: 144" << endl;
    cout << "Amount: 1 Kg" << endl;
    cout << "Price: 29 BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        dairy();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void yogurt(){
    cout << "--- Yogurt ---" << endl;
    cout << "Product code: 145" << endl;
    cout << "Amount: 1 Kg" << endl;
    cout << "Price: 100 BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        dairy();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void sherbet(){
    cout << "--- Sherbet ---" << endl;
    cout << "Product code: 146" << endl;
    cout << "Amount: 1 Kg" << endl;
    cout << "Price: 800 BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        dairy();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void custard(){
    cout << "--- Custard ---" << endl;
    cout << "Product code: 147" << endl;
    cout << "Amount: 1 Kg" << endl;
    cout << "Price: 83 BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        dairy();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}


void cream(){
    cout << "--- Cream ---" << endl;
    cout << "Product code: 148" << endl;
    cout << "Amount: 1 Kg" << endl;
    cout << "Price: 83 BDT" << endl;
    cout << "\n 0.Back \n 1.End process" << endl << " => ";
    int pro; cin >> pro;
    while(pro  != 0 && pro != 1){
        cout << " Invalid input! Please, try again..." << endl << "\n => ";
        cin >> pro;
    }
    switch(pro){
        case 0:
        dairy();
        break;

        case 1:
        cout << " Thank you for your times in this system..." << endl;
        cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
        break;
    }
}



void order(){

    list <int> rhlist;
    list <int> :: iterator it;

    int pc;

    while(true){
        cout<<" Enter product code that you want to purchase (if done, then enter 0): " << "\n => ";
        cin >> pc;
        if(pc== 0)
            break;

        rhlist.push_back(pc);
    }

    cout << "\n The products that you've selected: " << endl;
    rhlist.sort();
    for (it = rhlist.begin(); it != rhlist.end(); it++){
        cout << " " << *it << "\t";
    }

    cout << "\n\n 1. Total number of products \n 2. Remove any product code \n 3. Remove all the product code" << "\n => ";
    int list;
    cin >> list;
    while (list != 1 && list != 2 && list != 3){
        cout << " Invalid input! Please, try again..." << "\n => ";
        cin >> list;
    }

    switch (list){
    case 1:
        cout << " The number of products you want to purchase is: " << rhlist.size() << endl;
        break;

    case 2:
        cout << " Enter the product code that you want to remove (If done, then enter 0): " << "\n =>";
        int remov;
        cin >> remov;
        while(remov != 0){
            rhlist.remove(remov);
            rhlist.sort();
            for (it = rhlist.begin(); it != rhlist.end(); it++){
                cout<< *it << "\t";
            }
            cout << "\n => ";
            cin >> remov;

        }
        cout << " Successfully stopped removing products code." << endl;
        cout << " Select a option-" << endl;
        cout << " 1.Payment \n 2.Food Item \n 3.End System operation." << endl << "=> ";
        int select; cin >> select;
        while(select != 1 && select != 2 && select != 3){
            cout << "Invalid input! Please, try again..." << "\n => ";
        }
        switch (select){
            case 1:
            payment();
            break;

            case 2:
            fooditem();
            break;

            case 3:
            cout << " Thank you for your times in this system..." << endl;
            cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
            break;
        }
        break;

    case 3:
        rhlist.clear();
        cout << " All products code have been removed successfully!" << endl;
        cout << " If you want to go to the food item section, then enter 1. \n Otherwise, enter 0 for ending system." << endl << " => ";
        int fi; cin >> fi;
        while(fi != 0 && fi != 1){
            cout << " Invalid Input! Please, try again..." << "\n => ";
        }
        switch(fi){
            case 0:
            cout << " Thank you for your times in this system..." << endl;
            cout << " Hope, you enjoyed our services and comeback again soon.." << endl;
            break;

            case 1:
            fooditem();
            break;
        }
        break;

    }

}


void payment(){
    cout << " ||== Payment ==||" << endl;
    cout << " Enter your pin: " << "\n => ";
    int pinn; cin >> pinn;
    while (pinn != pin){
        cout << " Incorrect pin! Please, try again..." << "\n => ";
        cin >> pinn;
    }
    cout << " Select the payment method: " << endl;
    cout << " 1. Bkash \n 2. Rocket \n 3. Nagad " << "\n => ";
    int pay; cin >> pay;
    switch (pay){
        case 1:
        cout << "|--- Bkash ---|" << endl;
        cout << "Enter your mobile number: " << "\n => ";
        char mob; cin >> mob;
        cout << "Enter verification code: " << "\n => ";
        int vari; cin >> vari;
        while(vari != 3401){
            cout << "Invalid OTP! Please, try again..." << "\n => ";
            cin >> vari;
        }
        cout << "Enter your pin: " << "\n => ";
        int pinn1; cin >> pinn1;
        while(pinn1 != pin){
            cout << "Incorrect pin! Please, try again..." << "\n => ";
            cin >> pinn1;
        }
        cout << " Bkash payment successful! " << endl;
        cout << " We received your order. Thank you for reaching us. We will notify you soon.." << endl;

        break;

        case 2:
        cout << "|--- Rocket ---|" << endl;
        cout << "Enter your mobile number: " << "\n => ";
        char mob1; cin >> mob1;
        cout << "Enter verification code: " << "\n => ";
        int vari1; cin >> vari1;
        while(vari != 3401){
            cout << "Invalid OTP! Please, try again..." << "\n => ";
            cin >> vari1;
        }
        cout << "Enter your pin: " << "\n => ";
        int pinn2; cin >> pinn2;
        while(pinn2 != pin){
            cout << "Incorrect pin! Please, try again..." << "\n => ";
            cin >> pinn2;
        }
        cout << " Rocket payment successful! " << endl;
        cout << " We received your order. Thank you for reaching us. We will notify you soon.." << endl;
        break;

        case 3:
        cout << "|--- Nagad ---|" << endl;
        cout << "Enter your mobile number: " << "\n => ";
        char mob2; cin >> mob2;
        cout << "Enter verification code: " << "\n => ";
        int vari2; cin >> vari2;
        while(vari2 != 3401){
            cout << "Invalid OTP! Please, try again..." << "\n => ";
            cin >> vari2;
        }
        cout << "Enter your pin: " << "\n => ";
        int pinn3; cin >> pinn3;
        while(pinn3 != pin){
            cout << "Incorrect pin! Please, try again..." << "\n => ";
            cin >> pinn3;
        }
        cout << " Nagad payment successful! " << endl;
        cout << " We received your order. Thank you for reaching us. We will notify you soon.." << endl;
        break;

    }
}



void about(){
    cout << "Restaurant's Hack is a restaurant management system service . It is ...  ." << endl;
}
