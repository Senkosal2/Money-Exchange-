#include <iostream> //defualt library
using namespace std; //default namespace

int main() { // main function
  //SYSTEM DECLARE
  double currenciesUnit[9] = { 1.0, 4099.07, 4429.07, 29.74, 583.16, 5096.75, 2719.26, 3037.02, 4567.62 }, // default unit base on riel
    inputMoney, output[2]{}, user[100]{};
  int inputCurrency[2]{}, count = 0, userCount = 0, symbolCount[100]{};
  char userCheck, symbol; 

  //SYSTEM INPUT AND PROCESS
  do {
    //make everything goes default each loop
    count = 0;
    output[1] = 0;
    output[0] = 1;

    //show option
    cout << "1. Cambodian Reil (KHR)\t\t2. U.S Dollar (USD)\t\t3. Euro (EUR)" << endl;
    cout << "4. Japanese Yen (JPY)\t\t5. Chinese Yuan (CNY)\t\t6. British Pound (GBP)" << endl;
    cout << "7. Australian Dollar (AUD)\t8. Canadian Dollar (CAD)\t9. Swiss Franc (CHF)" << endl;
    //check user input which only allows from 1-9
    do {
      cout << "Enter Currency : ";
      cin >> inputCurrency[0];
    } while (inputCurrency[0] == 0  inputCurrency[0] > 9);
    //input money to exchange
    cout << "Enter Money : ";
    cin >> inputMoney;

    cout << "1. Cambodian Reil (KHR)\t\t2. U.S Dollar (USD)\t\t3. Euro (EUR)" << endl;
    cout << "4. Japanese Yen (JPY)\t\t5. Chinese Yuan (CNY)\t\t6. British Pound (GBP)" << endl;
    cout << "7. Australian Dollar (AUD)\t8. Canadian Dollar (CAD)\t9. Swiss Franc (CHF)" << endl;
    //check user input which only allows from 1-9
    do {
      cout << "Choose Currency : ";
      cin >> inputCurrency[1];
    } while (inputCurrency[1] == 0  inputCurrency[1] > 9);

    switch (inputCurrency[0]) {
    case 1:
      //condition checked
      for (int i = 0; i < inputCurrency[1]; i++) {
        count++;
      }
      //convert riel to currency
      output[1] = inputMoney / currenciesUnit[count - 1];
      //set riel sign, do not work (ASCII code)
      symbolCount[userCount] = 0;
      break;
    case 2:
      //condition checked
      for (int i = 0; i < inputCurrency[1]; i++) {
        count++;
      }
      //convert dollar to riel
      output[0] = inputMoney * currenciesUnit[1];
      //convert riel to selected currency
      output[1] = output[0] / currenciesUnit[count - 1];
      //set dollar sign (ASCII code)
      symbolCount[userCount] = 36;
      break;
    case 3:
      //condition checked
      for (int i = 0; i < inputCurrency[1]; i++) {
        count++;
      }
      //convert Euro to riel
      output[0] = inputMoney * currenciesUnit[2];
      //convert riel to selected currency
      output[1] = output[0] / currenciesUnit[count - 1];
      //set euro sign, do not work (ASCII code)
      symbolCount[userCount] = 128;
      break;
    case 4:
      //condition checked
      for (int i = 0; i < inputCurrency[1]; i++) {
        count++;
      }
      //convert Yen to riel
      output[0] = inputMoney * currenciesUnit[3];
      //convert riel to selected currency
      output[1] = output[0] / currenciesUnit[count - 1];
      //set Yen sign, do not work (ASCII code)
      symbolCount[userCount] = 0;
      break;
    case 5:
      //condition checked
      for (int i = 0; i < inputCurrency[1]; i++) {
        count++;
      }
      //convert Yuan to Riel
      output[0] = inputMoney * currenciesUnit[4];
      //convert Riel to selected currency
      output[1] = output[0] / currenciesUnit[count - 1];
      //set Yuan sign, do not work (ASCII code)
      symbolCount[userCount] = 0;
      break;
    case 6:
      //condition checked
      for (int i = 0; i < inputCurrency[1]; i++) {
        count++;
      }
      //convert Pound to Riel
      output[0] = inputMoney * currenciesUnit[5];
      //convert Riel to selected currency
      output[1] = output[0] / currenciesUnit[count - 1];
      //set Pound sign, do not work (ASCII code)
      symbolCount[userCount] = 156;
      break;
    case 7:
      //condition checked
      for (int i = 0; i < inputCurrency[1]; i++) {
        count++;
      }
      //convert AUD to Riel
      output[0] = inputMoney * currenciesUnit[6];
      //convert Riel to selected currency
output[1] = output[0] / currenciesUnit[count - 1];
      //set AUD sign, do not work (ASCII code)
      symbolCount[userCount] = 0;
      break;
    case 8:
      //condition checked
      for (int i = 0; i < inputCurrency[1]; i++) {
        count++;
      }
      //convert CUD to Riel
      output[0] = inputMoney * currenciesUnit[7];
      //convert Riel to selected currency
      output[1] = output[0] / currenciesUnit[count - 1];
      //set AUD sign, do not work (ASCII code)
      symbolCount[userCount] = 0;
      break;
    case 9:
      //condition checked
      for (int i = 0; i < inputCurrency[1]; i++) {
        count++;
      }
      //convert Swiss to Riel
      output[0] = inputMoney * currenciesUnit[8];
      //convert Riel to seleceted currency
      output[1] = output[0] / currenciesUnit[count - 1];
      //set Swiss sign, do not work (ASCII code)
      symbolCount[userCount] = 0;
      break;
    default:
      cout << "Bruh" << endl;
      break;
    }

    //output exchanged money each time
    cout << "Exchanged Money : " << output[1] << endl;
    //check number of user, then output each user as inputted
    userCount++;
    user[userCount - 1] = output[1];
    cout << "Do you want to continue? (y/n)";
    cin >> userCheck;
    cout << endl << endl;
  } while (userCheck == 'Y' || userCheck == 'y');

  //SYSTEM OUTPUT
  for (int i = 0; i < userCount; i++) {
    symbol = symbolCount[i];
    //output each time as many as inputted
    cout << "User " << i + 1 << " money exchanged : " << user[i] << " " << symbol << endl;
  }
  
  system("pause"); //pause the program unless any key is pressed

  return 0; //check the program is executed without any errors
}
