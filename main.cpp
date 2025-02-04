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
