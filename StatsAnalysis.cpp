#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

void clearScreen()  // to clear the entire screen
{
  system( "cls" );
}

// menu display
void adminDisplay();
void buyerDisplay();
void registerDisplay();
void logoutDisplay();
void deleteaccDisplay();
void passwordchangeDisplay();
void statisticalmenuDisplay();
void chooselistDisplay();
void minNumDisplay(double &minNum);
void maxNumDisplay(double &numm);
void medianNumDisplay(int &count,double &median);
void meanNumDisplay(double &mean,double &total,double &x);
void FindVarDisplay(int &count,double &sumSq,double &sum,double &var);
void findSDDisplay(int &count,double &sumSq,double &sum,double &stdDev);
void historyDisplay();
void distinctDisplay();
void choosePCDisplay();
void findPCDisplay(const int &roww, double &sum_XY, double &sum_X, double &sum_Y, double &squareSum_X, double &squareSum_Y, double &corr);
void histogramDisplay();
void histogram2Display(ofstream &data);
void distinctDisplay();


//Reports Menu
// Reports as txt and html individual
void saveMin(double &minNum);
void saveMinDisplay(double &minNum);
void saveMinDisplay2(double &minNum);
void saveMax(double &numm);
void saveMaxDisplay(double &numm);
void saveMaxDisplay2(double &numm);
void saveMedian(int &count, double &median);
void saveMedianDisplay(int &count, double &median);
void saveMedianDisplay2(int &count, double &median);
void saveMean(double &mean,double &total,double &x);
void saveMeanDisplay(double &mean,double &total,double &x);
void saveMeanDisplay2(double &mean,double &total,double &x);
void saveVar(int &count,double &sumSq,double &sum,double &var);
void saveVarDisplay(int &count,double &sumSq,double &sum,double &var);
void saveVarDisplay2(int &count,double &sumSq,double &sum,double &var);
void saveSD(int &count,double &sumSq,double &sum,double &stdDev);
void saveSDDisplay(int &count,double &sumSq,double &sum,double &stdDev);
void saveSDDisplay2(int &count,double &sumSq,double &sum,double &stdDev);
void savePC(const int &roww, double &sum_XY, double &sum_X, double &sum_Y, double &squareSum_X, double &squareSum_Y, double &corr);
void savePCDisplay(const int &roww, double &sum_XY, double &sum_X, double &sum_Y, double &squareSum_X, double &squareSum_Y, double &corr);
void savePCDisplay2(const int &roww, double &sum_XY, double &sum_X, double &sum_Y, double &squareSum_X, double &squareSum_Y, double &corr);
void saveDistinct();
void saveDistinctDisplay();
void saveDistinctDisplay2(ofstream &data);
void saveHistogram();
void saveHistogramDisplay();
void saveHistogramDisplay2(ofstream &data);

//fullreport
void report();
//report display -> html
void saveMinDisplay2Report(ofstream &data,double &minNum);
void saveMaxDisplay2Report(ofstream &data,double &numm);
void saveMedianDisplay2Report(ofstream &data,int &count,double &median);
void saveMeanDisplay2Report(double &mean,double &total,double &x);
void saveVarDisplay2Report(ofstream &data,int &count,double &sumSq,double &sum,double &var);
void saveSDDisplay2Report (ofstream &data,int &count,double &sumSq,double &sum,double &stdDev);
void saveHistogramDisplay2Report(ofstream &data);

//report calculation func
void minNumfunc(double &minNum);
void maxNumfunc(double &maxNum);
void medianNumfuc(double &median ,int &minValue,int &i,int &countmedian);
void meanNumfunc(double &mean,double &total,double &x);
void FindVarfunc(double &meanVr,double &var,double &sumVr,double &sumSq, int &countInVar);
void findSDfunc(double &meanSd,double &varSd,double &stdDev, double &sumSd,double &sumSqSd,int &countInSd);

// function prototypes
void loginsystem();
void adminMenu();
void buyerMenu();
void statisticalMenu();
void registerAcc();
void passswordvalidation(string &newP,string &newT,bool &startletter,bool &digit,bool &uppercase,bool &type);
void logout();
void accDetail();
void inactive();
void passwordchange();
void checkFile();
void loadData(string &fileName);
void saveas(string &filename);
void toList();                                         // insert data to individual array
void getlist();
void minNum();
void maxNum();
void medianNum();
void meanNum();
void FindVar();
void findSD();
void addhistory(string &opperation);
void histogram();
void distinct();
void choosePC();
void findPC(double PCa[],double PCb[]);
void savehistogram(ofstream &data);

// xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
// main program

const int roww = 100, coll = 5;
double info[roww][coll], listtemp[roww], age[roww], math[roww], science[roww], malay[roww];
string dataname, username, password, type, neww;

main()
{
    clearScreen();
    cout << endl;
    cout << " +---------------------------------------------------------+ " << endl;
    cout << " |                Data Analysis System                     | " << endl;
    cout << " +---------------------------------------------------------+ " << endl;
    cout << " |                                                         | " << endl;
    cout << " |                Welcome to Main Page                     | " << endl;
    cout << " |                                                         | " << endl;
    cout << " |   'Hello there ! Please Login to the system to use it'  | " << endl;
    cout << " +---------------------------------------------------------+ " << endl << endl;

    cout << " Username : " ;
    cin  >> username;
    cout << " Password : " ;
    cin  >> password;

    loginsystem();
}

// xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
// user display
// menu display definitions
void adminDisplay()
{
    clearScreen();
    cout << endl;
    cout << "+----------------------------------------------------------------------------------+ "<< endl;
    cout << "|                                  ADMIN MENU                                      | "<< endl;
    cout << "+----------------------------------------------------------------------------------+ "<< endl;
    cout << "|                               Welcome " <<username<<  "                            "<< endl;
    cout << "|                                                                                  | "<< endl;
    cout << "|        1.Create account                                                          | "<< endl;
    cout << "|        2.Delete account                                                          | "<< endl;
    cout << "|        3.Change password                                                         | "<< endl;
    cout << "|        4.Check account detail                                                    | "<< endl;
    cout << "|        5.Log out                                                                 | "<< endl;
    cout << "|                                                                                  | "<< endl;
    cout << "+----------------------------------------------------------------------------------+ "<< endl<<endl;
}

void buyerDisplay()
{
    clearScreen();
    cout << endl;
    cout << "+----------------------------------------------------------------------------------+ "<< endl;
    cout << "|                                 BUYER MENU                                       | "<< endl;
    cout << "+----------------------------------------------------------------------------------+ "<< endl;
    cout << "|                               Welcome " <<username<<  "                            "<< endl;
    cout << "|                                                                                  | "<< endl;
    cout << "|        1.Load data file                                                          | "<< endl;
    cout << "|        2.Statistical Analysis Menu                                               | "<< endl;
    cout << "|        3.Change password                                                         | "<< endl;
    cout << "|        4.View history                                                            | "<< endl;
    cout << "|        5.Log out                                                                 | "<< endl;
    cout << "|                                                                                  | "<< endl;
    cout << "+----------------------------------------------------------------------------------+ "<< endl<<endl;
}

void registerDisplay()
{
    clearScreen();
    cout << endl;
    cout << "+----------------------------------------------------------------------------------+ "<< endl;
    cout << "|                           CREATE NEW USER ACCOUT                                 | "<< endl;
    cout << "+----------------------------------------------------------------------------------+ "<< endl;
    cout << "|                                                                                  | "<< endl;
    cout << "|        Requirement :                                                             | "<< endl;
    cout << "|        1.Username for the account                                                | "<< endl;
    cout << "|        2.Password, condition :                                                   | "<< endl;
    cout << "|                    a.Start with a letter                                         | "<< endl;
    cout << "|                    b.Contain atleast 1 digit number                              | "<< endl;
    cout << "|                    c.Contain atleast 1 capital letter                            | "<< endl;
    cout << "|        3.User type  (Administrator / Buyer)                                      | "<< endl;
    cout << "|                                                                                  | "<< endl;
    cout << "+----------------------------------------------------------------------------------+ "<< endl<<endl<<endl;
}

void logoutDisplay()
{
    clearScreen();
    cout << endl << endl;
    cout << "          +---------------+" << endl;
    cout << "          |               |" << endl;
    cout << "          |    LOG OUT    |" << endl;
    cout << "          |               |" << endl;
    cout << "          +---------------+" << endl << endl;
}

void deleteaccDisplay()
{
    clearScreen();
    cout << endl << endl;
    cout << "          +----------------------+" << endl;
    cout << "          |                      |" << endl;
    cout << "          |    DELETE ACCOUNT    |" << endl;
    cout << "          |                      |" << endl;
    cout << "          +----------------------+" << endl << endl;
    cout << "Please enter the detail of the account. "<< endl;
}

void passwordchangeDisplay()
{
    clearScreen();
    cout << endl << endl;
    cout << "          +-----------------------+" << endl;
    cout << "          |                       |" << endl;
    cout << "          |    CHANGE PASSWORD    |" << endl;
    cout << "          |                       |" << endl;
    cout << "          +-----------------------+" << endl << endl;
    cout << "Please enter the new password. "<< endl;
    cout << "Username : " << username << endl;
}

// Statistical Menu Display
void statisticalmenuDisplay()
{
    clearScreen();
    cout << endl;
    cout << "+----------------------------------------------------------------------------------+ "<< endl;
    cout << "|                           Statistical Analysis Menu                              | "<< endl;
    cout << "+----------------------------------------------------------------------------------+ "<< endl;
    cout << "|                                                                                  | "<< endl;
    cout << "|        Calculate :                                                               | "<< endl;
    cout << "|        1.Minimum number                                                          | "<< endl;
    cout << "|        2.Maximum number                                                          | "<< endl;
    cout << "|        3.Median                                                                  | "<< endl;
    cout << "|        4.Mean                                                                    | "<< endl;
    cout << "|        5.Variance                                                                | "<< endl;
    cout << "|        6.Standard deviation                                                      | "<< endl;
    cout << "|        7.Correlation between any selected 2 columns                              | "<< endl;
    cout << "|        8.Distinct data members                                                   | "<< endl;
    cout << "|        9.Plot A histogram                                                        | "<< endl;
    cout << "|       10.Generate full report                                                    | "<< endl;
    cout << "|       11.Main menu                                                               | "<< endl;

    cout << "+----------------------------------------------------------------------------------+ "<< endl<<endl;
    cout << "Please enter the choice (number) : ";
}

void chooselistDisplay()
{
    clearScreen();
    cout << endl;
    cout << "+----------------------------------------------------------------------------------+ "<< endl;
    cout << "|                            CHOOSE DATA TO CALCULATE                              | "<< endl;
    cout << "+----------------------------------------------------------------------------------+ "<< endl;
    cout << "|                                                                                  | "<< endl;
    cout << "|        1.Student age                                                             | "<< endl;
    cout << "|        2.Mathematic score                                                        | "<< endl;
    cout << "|        3.Science score                                                           | "<< endl;
    cout << "|        4.Malay score                                                             | "<< endl;
    cout << "|                                                                                  | "<< endl;
    cout << "+----------------------------------------------------------------------------------+ "<< endl<<endl;
    cout << "Please enter the choice (number) : ";
}

void minNumDisplay(double &minNum)
{
    clearScreen();
    cout << endl;
    cout << "+----------------------------------------------------------------------------------+\n";
    cout << "|                           Statistical Analysis Menu                              |\n";
    cout << "|----------------------------------------------------------------------------------|\n";
    cout << "|                                 Minimum Value (" << dataname << ")                \n";
    cout << "+----------------------------------------------------------------------------------+\n";
    cout << "|                       The minimum value in the text file is " << minNum << "        \n";
    cout << "|                                                                                  |\n";
    cout << "|                                                                                  |\n";
    cout << "+----------------------------------------------------------------------------------+\n\n";
}

void maxNumDisplay(double &numm)
{
    clearScreen();
    cout << endl;
    cout << "+----------------------------------------------------------------------------------+\n";
    cout << "|                           Statistical Analysis Menu                              |\n";
    cout << "|----------------------------------------------------------------------------------|\n";
    cout << "|                          Maximum Value (" << dataname << ")                       \n";
    cout << "+----------------------------------------------------------------------------------+\n";
    cout << "|                       The maximum value in the text file is " << numm << "        \n";
    cout << "|                                                                                  |\n";
    cout << "|                                                                                  |\n";
    cout << "+----------------------------------------------------------------------------------+\n\n";
}

void medianNumDisplay(int &count,double &median)
{
    clearScreen();
    cout << fixed << showpoint << setprecision(2);
    cout << endl;
    cout << "+----------------------------------------------------------------------------------+\n";
    cout << "|                           Statistical Analysis Menu                              |\n";
    cout << "+----------------------------------------------------------------------------------+\n";
    cout << "|                          Median (" << dataname << ")                              \n";
    cout << "+----------------------------------------------------------------------------------+\n";
    cout << "|                                                                  n               |\n";
    cout << "|             n  = " << count << "                               Median =  --------        \n";
    cout << "|                                                                  2               |\n";
    cout << "|                                                                                  |\n";
    cout << "|             Median = " << median << "                                             \n";
    cout << "+----------------------------------------------------------------------------------+\n\n";
}

void meanNumDisplay(double &mean,double &total,double &x)
{
    clearScreen();
    cout << fixed << setprecision(2);
    cout << endl;
    cout << "+----------------------------------------------------------------------------------+\n";
    cout << "|                           Statistical Analysis Menu                              |\n";
    cout << "+----------------------------------------------------------------------------------+\n";
    cout << "|                            Mean (" << dataname << ")                              \n";
    cout << "+----------------------------------------------------------------------------------+\n";
    cout << "|           E(X)   = " << total << "                             E(X)               \n";
    cout << "|           n      = " << (x) << "                   Mean =  --------                 \n";
    cout << "|                                                         n                        |\n";
    cout << "|                                                                                  |\n";
    cout << "|           Mean   = "<< mean << "                                                  \n";
    cout << "+----------------------------------------------------------------------------------+\n\n";
}

void FindVarDisplay(int &count,double &sumSq,double &sum,double &var)
{
    clearScreen();
    cout << fixed << setprecision(2);
    cout << endl;
    cout << "+----------------------------------------------------------------------------------+\n";
    cout << "|                           Statistical Analysis Menu                              |\n";
    cout << "+----------------------------------------------------------------------------------+\n";
    cout << "|                        Variance (" << dataname << ")                              \n";
    cout << "+----------------------------------------------------------------------------------+\n";
    cout << "|                                                                                  |\n";
    cout << "|            E(X - mean)^2 = " << (count*sumSq - sum*sum) <<"                       \n";
    cout << "|               n          = " << count << "                            E(X - mean)^2  \n";
    cout << "|                                                Variance =   ---------            |\n";
    cout << "|                                                                n                 |\n";
    cout << "|                                                                                  |\n";
    cout << "|           Variance  = " << var <<"                                                \n";
    cout << "|                                                                                  |\n";
    cout << "+----------------------------------------------------------------------------------+\n\n";
}

void findSDDisplay(int &count,double &sumSq,double &sum,double &stdDev)
{
    clearScreen();
    cout << fixed << setprecision(2);
    cout << endl;
    cout << "+----------------------------------------------------------------------------------+\n";
    cout << "|                           Statistical Analysis Menu                              |\n";
    cout << "+----------------------------------------------------------------------------------+\n";
    cout << "|                      Standard Deviation (" << dataname << ")                      \n";
    cout << "+----------------------------------------------------------------------------------+\n";
    cout << "|                                                                                  |\n";
    cout << "| E(X - mean)^2 = " << (count*sumSq - sum*sum) << "                                        ______________  \n";
    cout << "|    n          = " << count <<"                                             / E(X - mean)^2  \n";
    cout << "|                                                           SD = /  ---------      |\n";
    cout << "|                                                               /       n          |\n";
    cout << "|                                                                                  |\n";
    cout << "|        Standard  = " << stdDev <<"                                                \n";
    cout << "|        Deviation                                                                 |\n";
    cout << "+----------------------------------------------------------------------------------+\n\n";
}

void historyDisplay()
{
    int count = 1;
    clearScreen();
    cout << endl << endl << "------------- " << username << " Log History ------------- " << endl << endl ;
    string a, b;
    fstream loghistory;
    loghistory.open(username + ".txt", ios::in);

    if (!loghistory)
    {
        cout << "Log history not found.";
    }
    else
    {
        while (loghistory >> a >> b)
        {
            cout << endl << "  " << count << "." << endl;
            cout << "  Operation : " << a << endl;
            cout << "  Column    : " << b << endl;
            count += 1;
        }
    }
    loghistory.close();
    cout << endl << endl;
    cout << "Press ENTER to continue " << endl;
    cin.get();cin.get();
    loginsystem();
}

void distinctDisplay()
{
    clearScreen();
    cout << endl;
    cout << "+----------------------------------------------------------------------------------+ "<< endl;
    cout << "|                           Statistical Analysis Menu                              | "<< endl;
    cout << "+----------------------------------------------------------------------------------+ "<< endl;
    cout << "|                       Distinct Data Members (" << dataname << ")                   " << endl;
    cout << "+----------------------------------------------------------------------------------+ "<< endl;
    cout << "|                                                                                  | "<< endl;
    cout << "| The distinct data are :                                                          | "<< endl;
    cout << "| ";
}

void histogramDisplay()
{
    clearScreen();
    cout << endl;
    cout << "+----------------------------------------------------------------------------------+ "<< endl;
    cout << "|                           Statistical Analysis Menu                              | "<< endl;
    cout << "+----------------------------------------------------------------------------------+ "<< endl;
    cout << "|                            Histogram (" << dataname << ")                          " << endl;
    cout << "+----------------------------------------------------------------------------------+ "<< endl;
}

void histogram2Display(ofstream &data) // Interface for txt file report histogram
{
    data << endl;
    data << "+----------------------------------------------------------------------------------+ "<< endl;
    data << "|                           Statistical Analysis Menu                              | "<< endl;
    data << "+----------------------------------------------------------------------------------+ "<< endl;
    data << "|                            Histogram (" << dataname << ")                          " << endl;
    data << "+----------------------------------------------------------------------------------+ "<< endl;
}

void choosePCDisplay()
{
    clearScreen();
    cout << endl;
    cout << "+----------------------------------------------------------------------------------+ "<< endl;
    cout << "|                           Statistical Analysis Menu                              | "<< endl;
    cout << "+----------------------------------------------------------------------------------+ "<< endl;
    cout << "|                             Pearson's Correlation                                |" << endl;
    cout << "+----------------------------------------------------------------------------------+ "<< endl;
    cout << "|                                                                                  | "<< endl;
    cout << "|        Between :                                                                 | "<< endl;
    cout << "|        1.Student age AND Mathematic score                                        | "<< endl;
    cout << "|        2.Student age AND Science score                                           | "<< endl;
    cout << "|        3.Student age AND Malay score                                             | "<< endl;
    cout << "|        4.Mathematic score AND Science score                                      | "<< endl;
    cout << "|        5.Mathematic score AND Malay score                                        | "<< endl;
    cout << "|        6.Science score AND Malay score                                           | "<< endl;
    cout << "|                                                                                  | "<< endl;
    cout << "+----------------------------------------------------------------------------------+" << endl << endl;
    cout << "Please enter the choice (number) : ";

}

void findPCDisplay(const int &roww, double &sum_XY, double &sum_X, double &sum_Y, double &squareSum_X, double &squareSum_Y, double &corr)
{
    double numerator = (roww * sum_XY - sum_X * sum_Y);
    double denominator = (sqrt((roww * squareSum_X - sum_X * sum_X)* (roww * squareSum_Y - sum_Y * sum_Y)));
    clearScreen();
    cout << endl;
    cout << setprecision(9);
    cout << "+-----------------------------------------------------------------------------------------+ "<< endl;
    cout << "|                           Statistical Analysis Menu                                     | "<< endl;
    cout << "+-----------------------------------------------------------------------------------------+ "<< endl;
    cout << "|              Pearson's Correlation (" << dataname << ")                                   " << endl;
    cout << "+-----------------------------------------------------------------------------------------+ "<< endl;
    cout << "|                                                                                         | "<< endl;
    cout << "|                                 n(E(XiYi) - x'y')                                       |" << endl;
    cout << "|                   P C =  ----------------------------------                             |" << endl;
    cout << "|                           _______________  _______________                              |" << endl;
    cout << "|                          /E(X^2i) - nx'^2  /E(y^2i) - ny'^2                             |" << endl;
    cout << "|                                                                                         | "<< endl;
    cout << "|                                                                                         | "<< endl;
    cout << "|                  n(E(XiYi) - x'y') = " << numerator << "                                  "<< endl;
    cout << "|  _______________  _______________                                                       | "<< endl;
    cout << "| /E(X^2i) - nx'^2  /E(y^2i) - ny'^2 = " << denominator << "                                "<< endl;
    cout << "|                                                                                         | "<< endl;
    cout << "|         Pearson's  = " << corr << "                                                       "<< endl;
    cout << "|       Correlation                                                                       |" << endl;
    cout << "+-----------------------------------------------------------------------------------------+" << endl << endl;
}

// xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
// function definitions

//Reports Menu
//Save as Text File

void saveMinDisplay(double &minNum)
{
    string savefile;
    cout << endl << endl;
    cout << "Enter new file name : ";
    cin >> savefile;
    ofstream data ( savefile + ".txt",ios::app);

    data << fixed << showpoint << setprecision(2);
    data << endl;
    data << "+----------------------------------------------------------------------------------+\n";
    data << "|                           Statistical Analysis Menu                              |\n";
    data << "|----------------------------------------------------------------------------------|\n";
    data << "|                          Minimum Value (" << dataname << ")                       \n";
    data << "+----------------------------------------------------------------------------------+\n";
    data << "|                                                                                  |\n";
    data << "|                       The minimum value in the text file is " << minNum << "      \n";
    data << "|                                                                                  |\n";
    data << "+----------------------------------------------------------------------------------+\n\n";
    data.close();
    cout << "Minimum report saved as " << savefile << ".txt!" << endl << "Press ENTER to continue.";
    cin.get(); cin.get();
    statisticalMenu();

}

void saveMaxDisplay (double &numm)
{
    string savefile;
    cout << endl << endl;
    cout << "Enter new file name : ";
    cin >> savefile;
    ofstream data ( savefile + ".txt",ios::app);

    data << fixed << showpoint << setprecision(2);
    data << endl;
    data << "+----------------------------------------------------------------------------------+\n";
    data << "|                           Statistical Analysis Menu                              |\n";
    data << "|----------------------------------------------------------------------------------|\n";
    data << "|                            Maximum Value (" << dataname << ")                     \n";
    data << "+----------------------------------------------------------------------------------+\n";
    data << "|                                                                                  |\n";
    data << "|                       The maximum value in the text file is " << numm << "        \n";
    data << "|                                                                                  |\n";
    data << "+----------------------------------------------------------------------------------+\n\n";
    data.close();
    cout << "Maximum report saved as " << savefile << ".txt!" << endl << "Press ENTER to continue.";
    cin.get(); cin.get();
    statisticalMenu();
}

void saveMedianDisplay(int &count,double &median)
{
    string savefile;
    cout << endl << endl;
    cout << "Enter new file name : ";
    cin >> savefile;
    ofstream data ( savefile + ".txt",ios::app);

    data << fixed << showpoint << setprecision(2);
    data << endl;
    data << "+----------------------------------------------------------------------------------+\n";
    data << "|                           Statistical Analysis Menu                              |\n";
    data << "+----------------------------------------------------------------------------------+\n";
    data << "|                      Median (" << dataname << ")                                  \n";
    data << "+----------------------------------------------------------------------------------+\n";
    data << "|                                                                  n               |\n";
    data << "|             n  = " << count << "                               Median =  --------        \n";
    data << "|                                                                  2               |\n";
    data << "|                                                                                  |\n";
    data << "|             Median = " << median << "                                             \n";
    data << "+----------------------------------------------------------------------------------+\n\n";
    data.close();
    cout << "Median report saved as " << savefile << ".txt!" << endl << "Press ENTER to continue.";
    cin.get(); cin.get();
    statisticalMenu();
}

void saveMeanDisplay(double &mean,double &total,double &x)
{
    string savefile;
    cout << endl << endl;
    cout << "Enter new file name : ";
    cin >> savefile;
    ofstream data ( savefile + ".txt",ios::app);

    data << fixed << showpoint << setprecision(2);
    data << endl;
    data << "+----------------------------------------------------------------------------------+\n";
    data << "|                           Statistical Analysis Menu                              |\n";
    data << "+----------------------------------------------------------------------------------+\n";
    data << "|                      Mean (" << dataname << ")                                    \n";
    data << "+----------------------------------------------------------------------------------+\n";
    data << "|           E(X)   = " << total << "                             E(X)               \n";
    data << "|           n      = " << x << "                   Mean =  --------                 \n";
    data << "|                                                         n                        |\n";
    data << "|                                                                                  |\n";
    data << "|           Mean   = "<< mean << "                                                  \n";
    data << "+----------------------------------------------------------------------------------+\n\n";
    data.close();
    cout << "Mean report saved as " << savefile << ".txt!" << endl << "Press ENTER to continue.";
    cin.get(); cin.get();
    statisticalMenu();
}

void saveVarDisplay(int &count,double &sumSq,double &sum,double &var)
{
    string savefile;
    cout << endl << endl;
    cout << "Enter new file name : ";
    cin >> savefile;
    ofstream data ( savefile + ".txt",ios::app);

    data << fixed << showpoint << setprecision(2);
    data << endl;
    data << "+----------------------------------------------------------------------------------+\n";
    data << "|                           Statistical Analysis Menu                              |\n";
    data << "+----------------------------------------------------------------------------------+\n";
    data << "|                        Variance (" << dataname << ")                              \n";
    data << "+----------------------------------------------------------------------------------+\n";
    data << "|                                                                                  |\n";
    data << "|            E(X - mean)^2 = " << (count*sumSq - sum*sum) <<"                       \n";
    data << "|               n          = " << count << "                            E(X - mean)^2  \n";
    data << "|                                                Variance =   ---------            |\n";
    data << "|                                                                n                 |\n";
    data << "|                                                                                  |\n";
    data << "|           Variance  = " << var <<"                                                \n";
    data << "|                                                                                  |\n";
    data << "+----------------------------------------------------------------------------------+\n\n";
    data.close();
    cout << "Variance report saved as " << savefile << ".txt!" << endl << "Press ENTER to continue.";
    cin.get(); cin.get();
    statisticalMenu();
}

void saveSDDisplay(int &count,double &sumSq,double &sum,double &stdDev)
{
    string savefile;
    cout << endl << endl;
    cout << "Enter new file name : ";
    cin >> savefile;
    ofstream data ( savefile + ".txt",ios::app);

    data << fixed << setprecision(2);
    data << endl;
    data << "+----------------------------------------------------------------------------------+\n";
    data << "|                           Statistical Analysis Menu                              |\n";
    data << "+----------------------------------------------------------------------------------+\n";
    data << "|                      Standard Deviation (" << dataname << ")                      \n";
    data << "+----------------------------------------------------------------------------------+\n";
    data << "|                                                                                  |\n";
    data << "| E(X - mean)^2 = " << (count*sumSq - sum*sum) << "                                        ______________  \n";
    data << "|    n          = " << count <<"                                             / E(X - mean)^2  \n";
    data << "|                                                           SD = /  ---------      |\n";
    data << "|                                                               /       n          |\n";
    data << "|                                                                                  |\n";
    data << "|        Standard  = " << stdDev <<"                                                \n";
    data << "|        Deviation                                                                 |\n";
    data << "+----------------------------------------------------------------------------------+\n\n";
    data.close();
    cout << "Standard Deviation report saved as " << savefile << ".txt!" << endl << "Press ENTER to continue.";
    cin.get(); cin.get();
    statisticalMenu();
}

void savePCDisplay(const int &roww, double &sum_XY, double &sum_X, double &sum_Y, double &squareSum_X, double &squareSum_Y, double &corr)
{
    string savefile;
    cout << endl << endl;
    cout << "Enter new file name : ";
    cin >> savefile;
    ofstream data ( savefile + ".txt",ios::app);
    double numerator = (roww * sum_XY - sum_X * sum_Y);
    double denominator = (sqrt((roww * squareSum_X - sum_X * sum_X)* (roww * squareSum_Y - sum_Y * sum_Y)));

    data << setprecision(9);
    data << endl;
    data << "+-----------------------------------------------------------------------------------------+ "<< endl;
    data << "|                           Statistical Analysis Menu                                     | "<< endl;
    data << "+-----------------------------------------------------------------------------------------+ "<< endl;
    data << "|              Pearson's Correlation (" << dataname << ")                                   "<< endl;
    data << "+-----------------------------------------------------------------------------------------+ "<< endl;
    data << "|                                                                                         | "<< endl;
    data << "|                                 n(E(XiYi) - x'y')                                       |" << endl;
    data << "|                   P C =  ----------------------------------                             |" << endl;
    data << "|                           _______________  _______________                              |" << endl;
    data << "|                          /E(X^2i) - nx'^2  /E(y^2i) - ny'^2                             |" << endl;
    data << "|                                                                                         | "<< endl;
    data << "|                                                                                         | "<< endl;
    data << "|                  n(E(XiYi) - x'y') = " << numerator << "                                  "<< endl;
    data << "|  _______________  _______________                                                       | "<< endl;
    data << "| /E(X^2i) - nx'^2  /E(y^2i) - ny'^2 = " << denominator << "                                "<< endl;
    data << "|                                                                                         | "<< endl;
    data << "|         Pearson's  = " << corr << "                                                       "<< endl;
    data << "|       Correlation                                                                       |" << endl;
    data << "+-----------------------------------------------------------------------------------------+" << endl << endl;
    data.close();
    cout << "Pearson's Correlation report saved as " << savefile << ".txt!" << endl << "Press ENTER to continue.";
    cin.get(); cin.get();
    statisticalMenu();
}

void saveHistogramDisplay()
{
    string savefile;
    cout << endl << endl;
    cout << "Enter new file name : ";
    cin >> savefile;
    ofstream data ( savefile + ".txt",ios::app);
    int n = sizeof(listtemp) / sizeof(listtemp[0]);
    int i,j,desc;
    string title = "Plot_histogram";

    // Mark all array elements as not visited
    vector<bool> visited(n, false);


    //  'for' loop is used for sorting the numbers in descending order
    for (i = 0; i < n ; ++i)   //  'for' loop is used for sorting the numbers in descending order
    {
        for (j = i + 1; j < n ; ++j)
        {
            if (listtemp[i] < listtemp[j])
            {
                desc = listtemp[i];
                listtemp[i] = listtemp[j];
                listtemp[j] = desc;
            }
        }
    }

    histogram2Display(data);
    data << endl << setw(6)<< " Frequency   Marks" << endl << endl;
    // Traverse through array elements and
    // count frequencies
    for (int i = 0; i < n; i++)
    {

        // Skip this element if already processed
        if (visited[i] == true)
            continue;

        // Count frequency
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (listtemp[i] == listtemp[j])
                {
                visited[j] = true;
                count++;
                }
        }
        //graphic
        string graphic;
        for(int i = 1; i <= count; i++)
        {
            graphic += "*";
        }
        data << setw(6)<< count << setw(10) << listtemp[i] << setw(4 )<< "|"<< graphic << endl;
    }

    data << "                   +---------+---------+---------+---------+----------+ " <<endl;
    data << "                   0         10        20        30        40         50 " <<endl<<endl;
    data.close();
    cout << "Histogram report saved as " << savefile << ".txt!" << endl << "Press ENTER to continue.";
    cin.get(); cin.get();
    statisticalMenu();
}


// Save as HTML
void saveMinDisplay2(double &minNum)
{
    string savefile;
    cout << endl << endl;
    cout << "Enter new file name : ";
    cin >> savefile;
    ofstream data ( savefile + ".html",ios::app);

    data << fixed << showpoint << setprecision(2);
    data << "<body style = background-color:Azure;>"; // Sets the background color for the entire page
    data << "<style>table, th, td {border:1px solid black;} th {padding-top: 20px; text-align:center;} td {padding: 30px; text-align:center;</style>"; // Formats the table heading and table row
    data << "<h1 style=text-align:center;background-color:Yellow;>Statistical Analysis Menu Report</h1><br>";
    data << "<table style=width:100%>";               // Formats the width of the table
    data << "<h1 style=text-align:center><i>"<<dataname<<"</i></h1><br>";
    data << "<tr><th><h2>MINIMUM VALUE REPORT </h2></th><br>";
    data << "<tr><td><h3>The minimum value in the text file is <i> " << minNum << "</i></h3></tr></td><br>";
    data << "</body>";
    data.close();
    cout << "Minimum report saved as " << savefile << ".html!" << endl << "Press ENTER to continue.";
    cin.get(); cin.get();
    statisticalMenu();
}

void saveMinDisplay2Report(ofstream &data,double &minNum)
{
    data << fixed << showpoint << setprecision(2);
    data << "<body style = background-color:Azure;>";
    data << "<style>table, th, td {border:1px solid black;} th {padding-top: 20px; text-align:center;} td{padding:20px;}</style> ";
    data << "<h1 style = text-align:center;background-color:Yellow;>Statistical Analysis Menu Report</h1><br>";
    data << "<h1 style = text-align:center><i>"<<dataname<<"</i></h1><br>";
    data << "<h1 style = text-align:center> FULL GENERATED REPORT</h1><br>";
    data << "<table style = width:100%>";
    data << "<tr><th><h2>Statistical Function</h2></th><th><h2>Value</h2></th></tr><br>";
    data << "<tr><td><h3 class ='as'>Minimum Value </td><td><i>" << minNum << "</i></h3></td><br>";
}

void saveMaxDisplay2(double &numm)
{
    string savefile;
    cout << endl << endl;
    cout << "Enter new file name : ";
    cin >> savefile;
    ofstream data ( savefile + ".html",ios::app);

    data << fixed << showpoint << setprecision(2);
    data << "<body style = background-color:Azure;>";
    data << "<style>table, th, td {border:1px solid black;} th {padding-top: 20px; text-align:center;} td {padding: 30px; text-align:center;</style>";
    data << "<h1 style=text-align:center;background-color:Yellow;>Statistical Analysis Menu Report</h1><br>";
    data << "<table style=width:100%>";
    data << "<h1 style=text-align:center><i>Data Name</i></h1><br>";
    data << "<tr><th><h1>MAXIMUM VALUE REPORT</h1></th><br>";
    data << "<tr><td><h3>The maximum value in the text file is <i>"<<numm<<"</i></h3></tr></td><br>";
    data << "</body>";
    data.close();
    cout << "Maximum report saved as " << savefile << ".html!" << endl << "Press ENTER to continue.";
    cin.get(); cin.get();
    statisticalMenu();
}

void saveMaxDisplay2Report(ofstream &data,double &numm)
{
    data << fixed << showpoint << setprecision(2);
    data << "<tr><td><h3>Maximum Value </td><td><i>" << numm << "</i></h3></td><br>";
}

void saveMedianDisplay2(int &count,double &median)
{
    string savefile;
    cout << endl << endl;
    cout << "Enter new file name : ";
    cin >> savefile;
    ofstream data ( savefile + ".html",ios::app);

    data << fixed << showpoint << setprecision(2);
    data << "<body style = background-color:Azure;>";
    data << "<style>table, th, td {border:1px solid black;} th {padding-top: 20px; text-align:center;} td {padding: 30px; text-align:center;}</style> ";
    data << "<h1 style = text-align:center;background-color:Yellow;>Statistical Analysis Menu Report</h1><br>";
    data << "<table style = width:100%>";
    data << "<h1 style = text-align:center><i>" << dataname <<"</i></h1><br>";
    data << "<h1 style = text-align:center> MEDIAN VALUE REPORT </h1><br>";
    data << "<tr><th><h3>Formula</h3></th><th><h3>Number of values</h3></th><th><h3>Median</h3></th><br>";
    data << "<tr><td><img src = 'images/median.png'> </td><td>" << count <<"</td>  <td><i>" << median << "</i></td><br>";
    data << "</body>";
    data.close();
    cout << "Median report saved as " << savefile << ".html!" << endl << "Press ENTER to continue.";
    cin.get(); cin.get();
    statisticalMenu();
}

void saveMedianDisplay2Report(ofstream &data,int &count,double &median)
{
    data << fixed << showpoint << setprecision(2);
    data << "<tr><td><h3>Median Value </td><td><i>" << median << "</i></h3></td><br>";
}

void saveMeanDisplay2(double &mean,double &total,double &x)
{
    string savefile;
    cout << endl << endl;
    cout << "Enter new file name : ";
    cin >> savefile;
    ofstream data ( savefile + ".html",ios::app);

    data << fixed << showpoint << setprecision(2);
    data << "<body style = background-color:Azure;>";
    data << "<style>table, th, td {border:1px solid black;} th {padding-top: 20px; text-align:center;} td {padding: 30px; text-align:center;}</style> ";
    data << "<h1 style = text-align:center;background-color:Yellow;>Statistical Analysis Menu Report</h1><br>";
    data << "<table style = width:100%>";
    data << "<h1 style = text-align:center><i>" <<dataname<<"</i></h1><br>";
    data << "<h1 style = text-align:center>MEAN VALUE REPORT</h1><br>";
    data << "<tr><th><h3>Formula</h3></th><th><h3>Sum of Values</h3></th><th><h3>Number of Values</th></h3><th><h3>Mean</h3></th><br>";
    data << "<tr><td><img src = 'images/mean.png'> </td><td>"<<total<<"</td> <td>"<< x << "</td> <td><i>" <<mean<<"</i></td><br>";
    data << "</body>";
    data.close();
    cout << "Mean report saved as " << savefile << ".html!" << endl << "Press ENTER to continue.";
    cin.get(); cin.get();
    statisticalMenu();
}

void saveMeanDisplay2Report(ofstream &data,double &mean,double &total,double &x)
{
    data << fixed << showpoint << setprecision(2);
    data << "<tr><td><h3>Mean Value </td><td><i>" << mean << "</i></h3></td><br>";
}

void saveVarDisplay2(int &count,double &sumSq,double &sum,double &var)
{
    string savefile;
    cout << endl << endl;
    cout << "Enter new file name : ";
    cin >> savefile;
    ofstream data ( savefile + ".html",ios::app);

    data << fixed << showpoint << setprecision(2);
    data << "<body style = background-color:Azure;>";
    data << "<style>table, th, td {border:1px solid black;} th {padding-top: 20px; text-align:center;} td {padding: 30px; text-align:center;}</style> ";
    data << "<h1 style = text-align:center;background-color:Yellow;>Statistical Analysis Menu Report</h1><br>";
    data << "<table style = width:100%>";
    data << "<h1 style = text-align:center><i>"<<dataname<<"</i></h1><br>";
    data << "<h1 style = text-align:center> VARIANCE REPORT </h1><br>";
    data << "<tr><th><h3>Formula</h3></th><th><img src = 'images/variance1.jpg'></th><th><h3>Number of Values</th></h3><th><h3>Variance</h3></th><br>";
    data << "<tr><td><img src = 'images/variance.png'> </td> <td>"<<(count*sumSq - sum*sum)<<"</td><td>"<<count<<"</td><td><i>"<<var<<"</i></td><br>";
    data << "</body>";
    data.close();
    cout << "Standard Deviation report saved as " << savefile << ".html!" << endl << "Press ENTER to continue.";
    cin.get(); cin.get();
    statisticalMenu();
}

void saveVarDisplay2Report(ofstream &data,int &count,double &sumSq,double &sum,double &var)
{
    data << fixed << showpoint << setprecision(2);
    data << "<tr><td><h3>Variance Value </td><td><i>" << var << "</i></h3></td><br>";
}

void saveSDDisplay2(int &count,double &sumSq,double &sum,double &stdDev)
{
    string savefile;
    cout << endl << endl;
    cout << "Enter new file name : ";
    cin >> savefile;
    ofstream data ( savefile + ".html",ios::app);

    data << fixed << showpoint << setprecision(2);
    data << "<body style = background-color:Azure;>";
    data << "<style>table, th, td {border:1px solid black;} th {padding-top: 20px; text-align:center;} td {padding: 30px; text-align:center;}</style> ";
    data << "<h1 style = text-align:center;background-color:Yellow;>Statistical Analysis Menu Report</h1><br>";
    data << "<table style = width:100%>";
    data << "<h1 style = text-align:center><i>"<<dataname<<"</i></h1><br>";
    data << "<h1 style = text-align:center> STANDARD DEVIATION </h1><br>";
    data << "<tr><th><h3>Formula</h3></th><th><img src = 'images/variance1.jpg'></th><th><h3>Number of Values</th></h3><th><h3>Standard Deviation</h3></th><br>";
    data << "<tr><td><img src = 'images/SD.png'> </td> <td>"<<(count*sumSq - sum*sum)<<"</td> <td>"<<count<<"</td><td><i>"<<stdDev<<"</i></td><br>";
    data << "</body>";
    data.close();
    cout << "Standard Deviation report saved as " << savefile << ".html!" << endl << "Press ENTER to continue.";
    cin.get(); cin.get();
    statisticalMenu();

}

void saveSDDisplay2Report (ofstream &data,int &count,double &sumSq,double &sum,double &stdDev)
{
    data << fixed << setprecision(2);
    data << "<tr><td><h3>Standard Deviation Value </td><td><i>" << stdDev << "</i></h3></td><br>";
}

void savePCDisplay2(const int &roww, double &sum_XY, double &sum_X, double &sum_Y, double &squareSum_X, double &squareSum_Y, double &corr)
{
    string savefile;
    cout << endl << endl;
    cout << "Enter new file name : ";
    cin >> savefile;
    ofstream data ( savefile + ".html",ios::app);

    data << setprecision(9);
    data << "<body style = background-color:Azure;>";
    data << "<style>table, th, td {border:1px solid black;} th {padding-top: 20px; text-align:center;} td {padding: 30px; text-align:center;}</style> ";
    data << "<h1 style = text-align:center;background-color:Yellow;>Statistical Analysis Menu Report</h1><br>";
    data << "<table style = width:100%>";
    data << "<h1 style = text-align:center><i>"<<dataname<<"</i></h1><br>";
    data << "<h1 style = text-align:center> PEARSON'S CORRELATION REPORT </h1><br>";
    data << "<tr><th><h3> Formula </h3></th><th><h3> X </h3></th><th><h3> Y </h3></th><th><h3> X*Y </h3></th><th><h3> X*X </h3></th><th><h3> Y*Y </h3></th><th><h3>Correlation Value</h3></th><br>";
    data << "<tr><td><img src = 'images/PC.png'></td><td>" << sum_X <<" </td><td>" << sum_Y << "<td>"<< sum_XY << "</td><td>" << squareSum_X << "</td><td>" << squareSum_Y << "</td><td>" << corr << "</td><br>";
    data.close();
    cout << "Pearson's Correlation report saved as " << savefile << ".html!" << endl << "Press ENTER to continue.";
    cin.get(); cin.get();
    statisticalMenu();

}

/*  This display function is to generate individual HTML report.
    The function calculates the distinct member based on the function distinct() and displays in tabular form;
    User inputs the desired file name to save the report
    Program displays the output in HTML
*/

void saveDistinctDisplay2()
{
    string savefile;
    cout << endl << endl;
    cout << "Enter new file name : ";
    cin >> savefile;
    ofstream data ( savefile + ".html",ios::app);
    int n = sizeof(listtemp) / sizeof(listtemp[0]);
    int i,j,desc;
    string title = "Plot_histogram";

    // Mark all array elements as not visited
    vector<bool> visited(n, false);


    //  'for' loop is used for sorting the numbers in descending order
    for (i = 0; i < n ; ++i)   //  'for' loop is used for sorting the numbers in descending order
    {
        for (j = i + 1; j < n ; ++j)
        {
            if (listtemp[i] < listtemp[j])
            {
                desc = listtemp[i];
                listtemp[i] = listtemp[j];
                listtemp[j] = desc;
            }
        }
    }
    data << "<body style = background-color:Azure;>";
    data << "<style>table, th, td {border:1px solid black;} th {padding-top: 20px; text-align:center;}</style> ";
    data << "<h1 style = text-align:center;background-color:Yellow;>Statistical Analysis Menu Report</h1><br>";
    data << "<table style = width:100%>";
    data << "<h1 style = text-align:center><i>"<<dataname<<"</i></h1><br>";
    data << "<h1 style = text-align:center> DISTINCT DATA MEMBERS REPORT </h1><br>";
    data << "<tr><td><h3>Distinct Data Members</h3></td><td><pre> "<< setw(6)<< " Frequency   Marks" << "<br>" << "<br>";
    // Traverse through array elements and
    // count frequencies
    for (int i = 0; i < n; i++)
    {

        // Skip this element if already processed
        if (visited[i] == true)
            continue;

        // Count frequency
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (listtemp[i] == listtemp[j])
                {
                visited[j] = true;
                count++;
                }
        }
        //graphic
        string graphic;
        for(int i = 1; i <= count; i++)
        {
            graphic += "*";
        }
        data << setw(6)<< count << setw(10) << listtemp[i] << setw(4 )<< "<br>";
    }
        data << "</td></pr></body>";
        data.close();
        cout << "Distinct Data Members report saved as " << savefile << ".html!" << endl << "Press ENTER to continue.";
        cin.get(); cin.get();
        statisticalMenu();
    }

/*  This display function is to generate individual HTML report for Histogram.
    The function displays the same output based on the function histogram() but in tabular form;
    User inputs the desired file name to save the report
    Program displays the output in HTML
*/
void saveHistogramDisplay2() //Histogram HTML
{
    string savefile;
    cout << endl << endl;
    cout << "Enter new file name : ";
    cin >> savefile;
    ofstream data ( savefile + ".html",ios::app);
    int n = sizeof(listtemp) / sizeof(listtemp[0]);
    int i,j,desc;
    string title = "Plot_histogram";

    // Mark all array elements as not visited
    vector<bool> visited(n, false);


    //  'for' loop is used for sorting the numbers in descending order
    for (i = 0; i < n ; ++i)   //  'for' loop is used for sorting the numbers in descending order
    {
        for (j = i + 1; j < n ; ++j)
        {
            if (listtemp[i] < listtemp[j])
            {
                desc = listtemp[i];
                listtemp[i] = listtemp[j];
                listtemp[j] = desc;
            }
        }
    }
    data << "<body style = background-color:Azure;>";
    data << "<style>table, th, td {border:1px solid black;} th {padding-top: 20px; text-align:center;} td {padding: 30px}</style> ";
    data << "<h1 style = text-align:center;background-color:Yellow;>Statistical Analysis Menu Report</h1><br>";
    data << "<table style = width:100%>";
    data << "<h1 style = text-align:center><i>"<<dataname<<"</i></h1><br>";
    data << "<h1 style = text-align:center> HISTOGRAM REPORT </h1><br>";
    data << "<tr><td><h3>Histogram</h3></td><td><pre> "<< setw(6)<< " Frequency   Marks" << "<br>" << "<br>";
    // Traverse through array elements and
    // count frequencies
    for (int i = 0; i < n; i++)
    {

        // Skip this element if already processed
        if (visited[i] == true)
            continue;

        // Count frequency
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (listtemp[i] == listtemp[j])
                {
                visited[j] = true;
                count++;
                }
        }
        //graphic
        string graphic;
        for(int i = 1; i <= count; i++)
        {
            graphic += "*";
        }
        data << setw(6)<< count << setw(10) << listtemp[i] << setw(4 )<< "|"<< graphic << "<br>";
    }

    data << "                   +---------+---------+---------+---------+----------+ " <<"<br>";
    data << "                   0         10        20        30        40         50 " <<"<br>"<<"<br>"<< "</td></pr>";
    data.close();
    cout << "Histogram report saved as " << savefile << ".html!" << endl << "Press ENTER to continue.";
    cin.get(); cin.get();
    statisticalMenu();

}


/*  This display function is to generate full HTML report.
    The function calculates the distinct member based on the function histogram();
    Program the output in HTML
*/
void saveHistogramDisplay2Report(ofstream &data) //Histogram Full Generated HTML
{
    int n = sizeof(listtemp) / sizeof(listtemp[0]);
    int i,j,desc;
    string title = "Plot_histogram";

    // Mark all array elements as not visited
    vector<bool> visited(n, false);


    //  'for' loop is used for sorting the numbers in descending order
    for (i = 0; i < n ; ++i)   //  'for' loop is used for sorting the numbers in descending order
    {
        for (j = i + 1; j < n ; ++j)
        {
            if (listtemp[i] < listtemp[j])
            {
                desc = listtemp[i];
                listtemp[i] = listtemp[j];
                listtemp[j] = desc;
            }
        }
    }

    data << "<tr><td><h3>Histogram of Distinct Value </h3></td><td><pre> "<< setw(6)<< " Frequency   Marks" << "<br>" << "<br>";
    // Traverse through array elements and
    // count frequencies
    for (int i = 0; i < n; i++)
    {

        // Skip this element if already processed
        if (visited[i] == true)
            continue;

        // Count frequency
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (listtemp[i] == listtemp[j])
                {
                visited[j] = true;
                count++;
                }
        }
        //graphic
        string graphic;
        for(int i = 1; i <= count; i++)
        {
            graphic += "*";
        }
        data << setw(6)<< count << setw(10) << listtemp[i] << setw(4 )<< "|"<< graphic << "<br>";
    }

    data << "                   +---------+---------+---------+---------+----------+ " <<"<br>";
    data << "                   0         10        20        30        40         50 " <<"<br>"<<"<br>"<< "</td></pr>";
    data.close();
}

// xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
// operation

//loginsystem()
//1.Check username and password match in database
//2.If matched means account had been registered
//3.then -> buyer menu / admin menu according account type
void loginsystem ()
{
    clearScreen();
    ifstream input("database.txt");
    string a,b,c,d;

    while(input>>a>>b>>c>>d){
        if(a==username && b==password && c == "admin" && d == "active"){
            type = "admin";
            input.close();
            adminMenu();}
        if (a==username && b==password && c == "buyer" && d == "active"){
            type = "buyer";
            input.close();
            buyerMenu();}}
    input.close();
    if(a!=username || b!=password )
        cout << endl << endl << "Incorrect username or password , Please try again." <<endl<<endl;
        cout << "Press ENTER to continue " << endl;
        cin.get();
        cin.get();
        clearScreen();
        main();
}

// admin main menu
// user enter number to choose action
// each number will call different function
// 1.Create account, 2.Delete account, 3.Change password, 4.Check account detail, 5.Log out
void adminMenu()
{
    int option;
    adminDisplay();
    cout << "Please enter the choice (number) : ";
    cin  >> option;

    switch(option)
    {
        case 1 : registerAcc();
                 break;
        case 2 : inactive();
                 break;
        case 3 : passwordchange();
                 break;
        case 4 : accDetail();
                 break;
        case 5 : logout();
                 break;
        default : cout << "Invalid input. Please choose the right input (number)" << endl;
                  cin.get();
                  cin.get();
                  loginsystem();
    }
}

// buyer main menu
// user enter number to choose action
// each number will call different function
// 1.Load data file, 2.Statistical Analysis Menu, 3.Change password, 4.View history, 5.Log out
void buyerMenu()
{
    int option;
    buyerDisplay();
    cout << "Please enter the choice (number) : ";
    cin  >> option;

    switch(option)
    {
        case 1 : checkFile();
                 break;
        case 2 : statisticalMenu();
                 break;
        case 3 : passwordchange();
                 break;
        case 4 : historyDisplay();
                 break;
        case 5 : logout();
                 break;
        default : cout << "Invalid input. Please choose the right input (number)" << endl;
                  cin.get();
                  cin.get();
                  loginsystem();
    }
}

// statistical nenu
// user enter number to choose action
// each number will call different function
// Calculate : Minimum, Maximum, Median, Mean, Variance, Standard deviation,
//             Correlation between any selected 2 columns, Distinct data members, Plot A histogram
// Generate full report, go to main manu(admin/buyer)
void statisticalMenu()
{
    int option;
    statisticalmenuDisplay();
    cin  >> option;
    switch(option)
    {
        case 1 : minNum();
                 break;
        case 2 : maxNum();
                 break;
        case 3 : medianNum();
                 break;
        case 4 : meanNum();
                 break;
        case 5 : FindVar();
                 break;
        case 6 : findSD();
                 break;
        case 7 : choosePC();
                 break;
        case 8 : distinct();
                 break;
        case 9 : histogram();
                 break;
        case 10 : report();
                 break;
        case 11 : loginsystem();
                 break;
        default : cout << "Invalid input. Please choose the right input (number)" << endl;
                  cin.get();cin.get();
                  statisticalMenu();
    }
}

//registerAcc()
//1.user need to enter account details (username,password and type)
//2.all the details will be check on password validation()
//3.if all boolean = true -> append the account detail on our database
void registerAcc()
{
    string newU,newP,newT;
    bool startletter = false; //check password start with first letter
    bool digit = false; // check password contain a digit
    bool uppercase = false; //check password contain an uppercase
    bool type = false; // check type contain only buyer/admin
    registerDisplay();
    cout  << "New account" << endl << endl;
    cout  <<"Enter username :";
    cin   >> newU;
    cout  <<"Enter password :";
    cin   >> newP;
    cout  <<"Enter account type (admin/buyer) :";
    cin   >> newT;

    passswordvalidation(newP,newT,startletter,digit,uppercase,type);

    ofstream data("database.txt",ios::app);//appendto database

    if (startletter && uppercase && digit && type ) //if password valid...
    {
       data << newU << " " << newP << " " << newT << " " << "active" << endl;
       data.close();
       cout << "Registration account SUCCESSFUL";
    }

    else
    {
        cout << "Password must start with a letter and must contain a digit and a capital letter." <<endl;
        cout << "Press ENTER to continue and register again" << endl<< endl;
        cin.get();
        cin.get();
        registerAcc();
    }
}

//password validation()
//1.check the password must start with a letter & contain a digit and a capital letter
//2.Check th type -> must be admin or buyer only
void passswordvalidation(string &newP,string &newT,bool &startletter,bool &digit,bool &uppercase,bool &type)
{
    int n = newP.length(); //.length - find the length of password
    if (isalpha(newP[0])) // like an array of letter for password
        startletter = true;

    if (newT == "admin" || newT == "buyer") //check type
        type = true;

    if (!type)
        cout << "Please enter 'admin' or 'buyer' ONLY for account type"<< endl;

    for (int i = 0; i < n; i++) //check uppercase and digit
    {
      if (isupper(newP[i]))
         uppercase = true;
      if (isdigit(newP[i]))
         digit = true;
    }
}

//logout()
//1.if user confirm logout -> loginsystem()
void logout()
{
    char option;
    logoutDisplay();
    cout << "Do you wish to Log out " << username << " ?  (y/n))" << endl;
    cin  >> option;

    if (option == 'y' || option == 'Y')
    {
        cout << "Logged out succesfully " << endl<< endl;
        cout << "Press ENTER to continue " << endl;
        cin.get();
        cin.get();

        main();
    }
    else
        loginsystem();
}

//accDetail()
//1.open database then output detail according to the sequence
//2.output sequence  will be shown as formatted below
//3. username :
//   password :
//   type :
//   Status :
void accDetail()
{
    clearScreen();
    string a,b,c,d;
    int count = 1;

    ifstream input("database.txt");
    if (input.is_open()) // bool to check file is open
        cout << endl << endl << "------------- Account detail ------------- " << endl << endl ;
       while(input>> a >> b >> c >> d ) // sequence of data in database.txt
       {
           cout << endl << "  " << count << "." << endl;
           cout << "  Userame  : " << a <<endl ;
           cout << "  Password : " << b <<endl ;
           cout << "  Type     : " << c <<endl ;
           cout << "  Status   : " << d << endl;
           count += 1;
       }
       input.close();
    cout << endl << endl;
    cout << "Press ENTER to continue " << endl;
    cin.get();cin.get();
    loginsystem();
}

//inactive()
//1.insert account username,passsword,type
//2.open database then duplicate  all account detail in tempt.txt without the account detail inserted end with active
//3.append deleteAcc on tempt.txt
//4. remove database.txt then rename tempt.txt to database.txt
void inactive()
{
    ifstream inFile("database.txt");
	ofstream outFile("temp.txt");
    bool updating = false;
    string nusername,npassword,ntype,line,acc,deleteAcc;
    deleteaccDisplay();

    cout << "Username           : ";
    cin  >> nusername;
    cout << "Password           : ";
    cin  >> npassword;
    cout << "Type (admin/buyer) : ";
    cin  >> ntype;

	acc = nusername + " " + npassword + " " + ntype + " " + "active";
	deleteAcc = nusername + " " + npassword + " " + ntype + " " + "inactive";

	while (!inFile.eof())
    {
		// read line by line from the file
		getline(inFile, line);

		if (line != acc && !line.empty())
		   outFile << line << endl;
		if (line == acc)
		   updating = true;
    }
    inFile.close();
    outFile.close();

    ofstream update("temp.txt",ios::app);
    if (updating)
    {
       cout << "Accout has been updated to inactive"<<endl;
       update << deleteAcc << endl;
    }

    else
       cout << "There is no account with that detail registered."<< endl;

    update.close();
    remove("database.txt");
    rename("temp.txt","database.txt");
    update.close();
}

// passwordchange
// user enter the new password
// new password must contains atleast 1 capital letter and 1 number
// old database file will be replace
void passwordchange()
{
    ifstream inFile("database.txt");
	ofstream outFile("temp.txt");
    bool updating = false; bool startletter = false; bool digit = false; bool uppercase = false; bool typeC = false;
    string npassword,line,oldP,newP;

    passwordchangeDisplay();
    cout << "New password : ";
    cin  >> npassword;

    passswordvalidation(npassword,type,startletter,digit,uppercase,typeC);

	oldP = username + " " + password + " " + type + " " + "active";
	newP = username + " " + npassword + " " + type + " " + "active";

    if(startletter && uppercase && digit && typeC )
    {
        while (!inFile.eof())
        {
            getline(inFile, line);
            if (line != oldP && !line.empty())
            outFile << line << endl;
            if (line == oldP)
            updating = true;
        }
        inFile.close();
        outFile.close();

        ofstream update("temp.txt",ios::app);
        if (updating)
        {
        cout << "Password has been change"<<endl;
        update << newP << endl;
        }

        else
        {
        cout << "Change password fail."<< endl;
        }
        update.close();
        remove("database.txt");             // delete database.txt
        rename("temp.txt","database.txt");  // rename  temp.txt to database.txt
        update.close();
    }

    else
    {
        cout << "Password must start with a letter and must contain a digit and a capital letter." <<endl;
        cout << "Press ENTER to continue and register again" << endl;
        cin.get();
        cin.get();
        loginsystem();
    }
}

// user enter the file name
// this function will check if the file exist or not
void checkFile()
{
    string fileName;
    cout << endl << endl << "Please enter the file's name." << endl << "(Example : abc.txt)" << endl;
    cin >> fileName;
    cout << endl << endl;
    ifstream load(fileName);
    if (!load){
        load.close();
        cout << "Error, file " << fileName << " not exist." << endl << "Press ENTER to continue" << endl;
        cin.get();
        cin.get();
        loginsystem();
        }
    loadData(fileName);
}

// all the data fromm the file will be load
// get all data from the file and save in 2D array
void loadData(string &fileName)
{
    char option;
    ifstream load(fileName);
    string line = "",temp = "";
    int j = 0, k = 0;
    while(getline(load,line)){
        if(line != ""){                     // go to each row
            k = 0;
            line = line + ',';
            for(int i = 0; i < line.length(); i++){                   // go to each column
                if(line[i] != ','){
                    temp += line[i];                              // get all data and put in 2D array
                }
                else{
                    info[j][k] = stoi(temp);
                    temp = "";
                    k++;
                }
            }
        }j++;
    }

    toList();
    load.close();
    cout << "Do you want to save this file with another name ? (y/Y - to confirm)"<<endl;
    cin  >> option;
    if (option == 'y' || option == 'Y') {
       saveas(fileName);
       cout << "File " << fileName << " has been loaded as " << neww << ".txt" << endl;
    }
    cout << "Press ENTER to continue" << endl;
    cin.get();cin.get();
    loginsystem();
}

//saveas()
//1. Type filename to enter
//2. duplicate all detail from database to filename entered
void saveas(string &filename)
{
    string line,savefile;

    cout << "Save as ; Enter new file name. "<< endl << "(Example : newfile)" << endl;
    cin  >> savefile;
    cout << endl << endl;
    ifstream inputFile(filename);
    ofstream outputFile(savefile +".txt");

	while (!inputFile.eof())
    {
		// read line by line from the file
		getline(inputFile, line);

		if ( !line.empty() ) //check line not empty
		   outputFile << line << endl;
    }
    neww = savefile;
    inputFile.close();
    outputFile.close();
}

// the data from 2D array will be save in different array
// array : age, math, science, malay
void toList()
{
    int r, c, i;
    for (c = 0; c < coll; c++)
    {
        for (r = 0; r < roww; r++)
        {
            if (c = 1)
            {
                i = r;
                age[i] = info[r][c];      // all the data in column 1 will be save to age array
            }
            if (c = 2)
            {
                i = r;
                math[i] = info[r][c];      // all the data in column 2 will be save to math array
            }
            if (c = 3)
            {
                i = r;
                science[i] = info[r][c];      // all the data in column 3 will be save to science array
            }
            if (c = 4)
            {
                i = r;
                malay[i] = info[r][c];      // all the data in column 4 will be save to malay array
            }
        }
    }
}

// user column to compute
// the array that contain the specific
// will be transfer to empty array, listtemp
void getlist()
{
    int option;
    chooselistDisplay();
    cin >> option;
    if (option == 1)
    {
        for(int i=0; i<roww; ++i)
        {
            listtemp[i] = age[i];
        }
        dataname = "Student_Age";
    }
    else if (option == 2)
    {
        for(int i=0; i<roww; ++i)
        {
            listtemp[i] = math[i];
        }
        dataname = "Mathematics_Score";
    }
    else if (option == 3)
    {
        for(int i=0; i<roww; ++i)
        {
            listtemp[i] = science[i];
        }
        dataname = "Science_Score";
    }
    else if (option == 4)
    {
        for(int i=0; i<roww; ++i)
        {
            listtemp[i] = malay[i];
        }
        dataname = "Malay_Score";
    }
    else
    {
        cout << "Invalid input. Please choose the right input (number)" << endl;
        cin.get();cin.get();
        getlist();
    }
}

/*  This function calculates the minimum value of a selected column
    This function is passed from the function minNum() for calculation
    The function sets counter(i) to 0 and checks the number with the array if array value is smaller
    If the value is smaller, it sets minNum to the number
    Repeat the process of checking the number with number before it until it reaches the last number
*/
void minNumfunc(double &minNum)
{
    for(int i=0; i<roww; ++i)
    {
        if(listtemp[i] < minNum)
        {
            minNum = listtemp[i];
        }
    }
}

/*
This function initializes the minNum to 100 and gets the value from getlist()
It calls the functions minNumfunc() and displays the value in the minNumDisplay() with minNum as the parameter
The saveMin(minNum) function call is to check if the user wishes to save the report
*/

void minNum()
{
    double minNum=100;
    string title = "Minimum";
    getlist();

    minNumfunc(minNum);

    minNumDisplay(minNum);
    addhistory(title);
    saveMin(minNum);
}

/*  This function calculates the maximum value of a selected column
    This function is passed from the function maxNum() for calculation
    The function sets counter(i) to 0 and checks the number with the array if the value is larger
    If the value is larger, it sets minNum to the number
*/
void maxNumfunc(double &maxNum)
{
    for(int i=0; i<roww; ++i)
    {
        if(listtemp[i] > maxNum)
        {
            maxNum = listtemp[i];
        }
    }
}

/*
This function initializes the maxNum to 0 and gets the value from getlist()
It calls the functions maxNumfunc() and displays the value in the maxNumDisplay() with maxNum as the parameter
The saveMax(maxNum) function call is to check if the user wishes to save the report
*/
void maxNum()
{
    double maxNum = 0;
    string title = "Maximum";
    getlist();

    maxNumfunc(maxNum);

    maxNumDisplay(maxNum);
    addhistory(title);
    saveMax(maxNum);
}

/*
This function calculates the median
The variables from medianNum is passed into this function for calculation
*/
void medianNumfuc(double &median ,int &minValue,int &i,int &countmedian)
{
    for(i=0; i<roww; ++i){
    countmedian++;
       for ( i = 0; i < (countmedian - 1); i++){ // Sort array in ascending order
        for (int j = i + 1; j < countmedian; j++){
             if (listtemp[j] < listtemp[i]){ // If the value is smaller, exchange
                minValue = listtemp[i];
                listtemp[i] = listtemp[j];
                listtemp[j] = minValue;}
          }
       }
    }
    if(countmedian % 2 == 1){ // Array value is odd valued. Median is the middle value
        median = listtemp[countmedian/2];}
    else{
        median = (listtemp[countmedian/2] + (listtemp[countmedian/2-1]))/2;} // Array value is even valued, median is the middle value between the two middle value
}

/*
This function is to declare and initialize the variables needed to compute median value
*/

void medianNum()
{
    double median;
    int minValue, i, countmedian = 0;
    string title = "Median";
    getlist();
    medianNumfuc(median,minValue,i,countmedian);
    cout << endl;
    medianNumDisplay(countmedian, median);
    addhistory(title);
    saveMedian(countmedian, median);
}

/*
meanNumfunc() is to calculate the mean value
The variables are passed from meanNum()
*/

void meanNumfunc(double &mean,double &total,double &x)
{
    for(int i=0; i<roww; ++i)
    {
        total += listtemp[i]; // Sums up all the values in the array
        x++;                  // Counts the total value in the array
    }
    mean = total/x;          // Mean is calculated with this formula
}

/*
This function is to declare and initialize the variables needed to compute median value
*/
void meanNum()
{
    double mean = 0, total = 0, x =0;
    string title = "Mean";
    getlist();
    meanNumfunc(mean,total,x);
    meanNumDisplay(mean,total,x);
    addhistory(title);
    saveMean(mean,total,x);
}

void FindVarfunc(double &meanVr,double &var,double &sumVr,double &sumSq, int &countInVar)
{
    for(int i=0; i<roww; ++i)
    {
        sumVr+=listtemp[i];                   // calculate sum of each value
        sumSq+=(listtemp[i]*listtemp[i]);
        ++countInVar;                // total data counter
    }
    meanVr = sumVr/countInVar;                       // find mean of the data
    var = (countInVar*sumSq - sumVr*sumVr)/(countInVar*(countInVar - 1));                   // find variance
}

void FindVar()
{
    double meanVr, var, sumVr=0, sumSq=0;
    int countInVar=0;
    string title = "Variance";
    getlist();
    FindVarfunc(meanVr,var,sumVr,sumSq,countInVar);
    FindVarDisplay(countInVar,sumSq,sumVr,var);
    addhistory(title);
    saveVar(countInVar,sumSq,sumVr,var);
}

void findSDfunc(double &meanSd,double &varSd,double &stdDev, double &sumSd,double &sumSqSd,int &countInSd)
{
    for(int i=0; i<roww; ++i)
    {
        sumSd+=listtemp[i];                     // calculate sum of each value
        sumSqSd+=(listtemp[i]*listtemp[i]);
        ++countInSd;                  // total data counter
    }

    meanSd = sumSd/countInSd;                // find mean of the data
    varSd = (countInSd*sumSqSd - sumSd*sumSd)/(countInSd*(countInSd - 1));             // find variance
    stdDev = sqrt(varSd);                            // find sqrt of variance to get standard deviation
}

void findSD()
{
    double meanSd, varSd, stdDev, sumSd=0, sumSqSd=0; //Sd means standard deviation
    int countInSd=0;
    string title = "Standard_Deviation";
    getlist();

    findSDfunc(meanSd,varSd,stdDev,sumSd,sumSqSd,countInSd);
    findSDDisplay(countInSd,sumSqSd,sumSd,stdDev);
    addhistory(title);
    saveSD(countInSd,sumSqSd,sumSd,stdDev);
}

/*
This function detects the users operation throughout the program
The data will be saved in the history log
The file name is the username
*/
void addhistory(string &opperation)
{
    ofstream historyfile(username + ".txt",ios::app);
    historyfile << opperation << " "  << dataname << endl;
    historyfile.close();
}

/*
This program chooses the columns to compute the correlation
*/
void choosePC()
{
    double X[roww], Y[roww];
    for (int i = 0; i < roww ; i++){
    X[i] = 0;
    Y[i] = 0;}

    choosePCDisplay();
    int option;
    cin >> option;
    if (option == 1)
    {
        for(int i=0; i<roww; ++i)
        {
            X[i] = age[i];
            Y[i] = math[i];
        }
        dataname = "Student_age_AND_Mathematic_score";
    }
    else if (option == 2)
    {
        for(int i=0; i<roww; ++i)
        {
            X[i] = age[i];
            Y[i] = science[i];
        }
        dataname = "Student_age_AND_Science_score";
    }
    else if (option == 3)
    {
        for(int i=0; i<roww; ++i)
        {
            X[i] = age[i];
            Y[i] = malay[i];
        }
        dataname = "Student_age_AND_Malay_score";
    }
    else if (option == 4)
    {
        for(int i=0; i<roww; ++i)
        {
            X[i] = math[i];
            Y[i] = science[i];
        }
        dataname = "Mathematic_score_AND_Science_score";
    }
    else if (option == 5)
    {
        for(int i=0; i<roww; ++i)
        {
            X[i] = math[i];
            Y[i] = malay[i];
        }
        dataname = "Mathematic_score_AND_Malay_score";
    }
    else if (option == 6)
    {
        for(int i=0; i<roww; ++i)
        {
            X[i] = science[i];
            Y[i] = malay[i];
        }
        dataname = "Science_score_AND_Malay_score";
    }
    findPC(X,Y);
}
/*
This function calculates the correlation using a formula
The function initializes and declares two arrays and computes the necessary calculations following the formula
*/

void findPC(double PCa[],double PCb[])
{
    double corr, sum_X = 0, sum_Y = 0, sum_XY = 0, squareSum_X = 0, squareSum_Y = 0;
    string title = "Pearson’s_correlation";

    for (int i = 0; i < roww ; i++){
        // sum of elements of array X.
        sum_X += PCa[i];

        // sum of elements of array Y.
        sum_Y += PCb[i];

        // sum of X[i] * Y[i].
        sum_XY += PCa[i] * PCb[i];

        // sum of square of array elements.
        squareSum_X = squareSum_X + PCa[i] * PCa[i];
        squareSum_Y = squareSum_Y + PCb[i] * PCb[i];
    }
    // use formula for calculating correlation coefficient.
    corr = (roww * sum_XY - sum_X * sum_Y)
           / sqrt((roww * squareSum_X - sum_X * sum_X)
           * (roww * squareSum_Y - sum_Y * sum_Y));
    findPCDisplay(roww, sum_XY, sum_X, sum_Y, squareSum_X, squareSum_Y, corr);
    addhistory(title);
    savePC(roww, sum_XY, sum_X, sum_Y, squareSum_X, squareSum_Y, corr);
}

/*
This function calculates the distinct data
*/
int countDistinct(double arr[], int n)
{
    int res = 1;             // total distinct data initialize to 1

    for (int i = 1; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])             // Pick all elements one by one

                break;

        if (i == j)
            res++;                //counter will added by 1
    }
    return res;
}
/*
This function calculates the frequency of the distinct data members
*/

int countFreq(double arr[], int n)
{
    // Mark all array elements as not visited
    vector<bool> visited(n, false);

    cout << "+----------------------------------------------------------------------------------+\n";
    cout << "|                 Data                    |             Frequency                  |\n";
    cout << "+----------------------------------------------------------------------------------+\n";
    // Traverse through array elements and
    // count frequencies
    for (int i = 0; i < n; i++) {

        // Skip this element if already processed
        if (visited[i] == true)
            continue;

        // Count frequency
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }
        cout << "|                 " << arr[i] << "                      |                " << count << "                      |" << endl;
    }
    return 0;
}

/*
The function initializes and declares the variables needed to calculate frequency of distinct data members
*/
void distinct()
{
    int count= 0, number;
    string title = "Distinct_data";
    for (int i = 0; i < roww ; i++){
        listtemp[i] = 0;}
    getlist();
    distinctDisplay();
    number = roww;
    int n = sizeof(listtemp) / sizeof(listtemp[0]);   //// check size of array


    for (int i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < i; j++)
            if (listtemp[i] == listtemp[j])         // Pick all elements one by one

                break;


        if (i == j)                                        // Check if the picked element is already printed
            cout << listtemp[i] << "  ";                   // If not printed earlier, then print it
    }
    cout << endl << "|                                                                                  |" << endl ;
    cout << "| The total distinct data is " << countDistinct(listtemp,n) << "                                                     |" << endl;
    cout << "|                                                                                  |" << endl;
    countFreq(listtemp, n);
    cout << "+----------------------------------------------------------------------------------+" << endl << endl;
    addhistory(title);
    saveDistinct();
}

/*
This function displays the data in txt form. The function is not placed
in the same category as other txt displays because it uses
*/
void saveDistinctDisplay()
{
    string savefile;
    cout << endl << endl;
    cout << "Enter new file name : ";
    cin >> savefile;
    ofstream data ( savefile + ".txt",ios::app);
    int n = sizeof(listtemp) / sizeof(listtemp[0]);
    int i,j,desc;

    // Mark all array elements as not visited
    vector<bool> visited(n, false);


    //  'for' loop is used for sorting the numbers in descending order
    for (i = 0; i < n ; ++i)   //  'for' loop is used for sorting the numbers in descending order
    {
        for (j = i + 1; j < n ; ++j)
        {
            if (listtemp[i] < listtemp[j])
            {
                desc = listtemp[i];
                listtemp[i] = listtemp[j];
                listtemp[j] = desc;
            }
        }
    }

    data << setw(6)<< " Frequency   Marks" << endl << endl;
    // Traverse through array elements and
    // count frequencies
    for (int i = 0; i < n; i++)
    {

        // Skip this element if already processed
        if (visited[i] == true)
            continue;

        // Count frequency
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (listtemp[i] == listtemp[j])
                {
                visited[j] = true;
                count++;
                }
        }
        //graphic
        string graphic;
        for(int i = 1; i <= count; i++)
        {
            graphic += "*";
        }
        data << setw(6)<< count << setw(10) << listtemp[i] << setw(4 )<< endl;
    }
    cout << "Distinct Data Member's report saved as " << savefile << ".txt!" << endl << "Press ENTER to continue.";
    cin.get(); cin.get();
    statisticalMenu();
}

// histogram()
//1. Get the distinct element
//2. count the frequency of disticnt element
//3. display the '*' as graphic according to frequency
//4. show output in formatted below
void histogram()
{
    clearScreen();
    int n = sizeof(listtemp) / sizeof(listtemp[0]);
    int i,j,desc;
    string title = "Plot_histogram";
    clearScreen;
    getlist();
    // Mark all array elements as not visited
    vector<bool> visited(n, false);

    //  'for' loop is used for sorting the numbers in descending order
    for (i = 0; i < n ; ++i)   //  'for' loop is used for sorting the numbers in descending order
    {
        for (j = i + 1; j < n ; ++j)
        {
            if (listtemp[i] < listtemp[j])
            {
                desc = listtemp[i];
                listtemp[i] = listtemp[j];
                listtemp[j] = desc;
            }
        }
    }
    histogramDisplay();
    cout << endl << setw(6)<< " Frequency   Marks" << endl << endl;
    // Traverse through array elements and
    // count frequencies
    for (int i = 0; i < n; i++)
    {

        // Skip this element if already processed
        if (visited[i] == true)
            continue;

        // Count frequency
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (listtemp[i] == listtemp[j])
                {
                visited[j] = true;
                count++;
                }
        }
        //graphic
        string graphic;
        for(int i = 1; i <= count; i++)
        {
            graphic += "*";
        }
        cout << setw(6)<< count << setw(10) << listtemp[i] << setw(4 )<< "|"<< graphic << endl;
    }

    cout << "                   +---------+---------+---------+---------+----------+ " <<endl;
    cout << "                   0         10        20        30        40         50 " <<endl<<endl;
    addhistory(title);
    saveHistogram();
}

//Save report functions
// xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
/*
All of these functions below is to check with the user if they wish to save the calculations in a report
If the user inputs number 1 ; directs the program to save the report as text file
If the user inputs number 2 ; it directs the program to save the report as HTML
*/

/*
This function checks if the user wishes to save the minimum report in text file or html
*/
void saveMin(double &minNum)
{
    int option;
    char choice;

    cout << "Do you wish to save report? (Y/N)\n";
    cin >> choice;
    cout << endl << endl;

    if(choice == 'y' || choice == 'Y')
    {
        cout << "Save report as : " << endl;
        cout << "1. Save as text file" << endl;
        cout << "2. Save as HTML file" << endl;
        cout << "Enter choice : ";
        cin >> option;

        switch(option)
        {
            case 1 : saveMinDisplay(minNum);
                     break;
            case 2 : saveMinDisplay2(minNum);
                     break;
            default : cout << "Invalid input. Please try again." << endl;
            cin.get();cin.get();
            statisticalMenu();
        }
    }
    else
    {
        statisticalMenu();
    }
}

/*
This function checks if the user wishes to save the maximum report in text file or html
*/
void saveMax(double &numm)
{
    int option;
    char choice;

    cout << "Do you wish to save report? (Y/N)\n";
    cin >> choice;
    cout << endl << endl;

    if(choice == 'y' || choice == 'Y')
    {
        cout << "Save report as : " << endl;
        cout << "1. Save as text file" << endl;
        cout << "2. Save as HTML file" << endl;
        cout << "Enter option : ";
        cin >> option;

        switch(option)
        {
            case 1 : saveMaxDisplay(numm);
                     break;
            case 2 : saveMaxDisplay2(numm);
                     break;
            default : cout << "Invalid input. Please try again." << endl;
            cin.get();cin.get();
            statisticalMenu();
        }
    }
    else
    {
        statisticalMenu();
    }
}

/*
This function checks if the user wishes to save the median report in text file or html
*/

void saveMedian(int &count, double &median)
{
    int option;
    char choice;

    cout << "Do you wish to save report? (Y/N)\n";
    cin >> choice;
    cout << endl << endl;

    if(choice == 'y' || choice == 'Y')
    {
        cout << "Save report as : " << endl;
        cout << "1. Save as text file" << endl;
        cout << "2. Save as HTML file" << endl;
        cout << "Enter choice : ";
        cin >> option;

        switch(option)
        {
            case 1 : saveMedianDisplay(count,median);
                     break;
            case 2 : saveMedianDisplay2(count,median);
                     break;
            default : cout << "Invalid input. Please try again." << endl;
            cin.get();cin.get();
            statisticalMenu();
        }
    }
    else
    {
        statisticalMenu();
    }

}

/*
This function checks if the user wishes to save the mean report in text file or html
*/
void saveMean(double &mean, double &total, double &x)
{
    int option;
    char choice;

    cout << "Do you wish to save report? (Y/N)\n";
    cin >> choice;
    cout << endl << endl;

    if(choice == 'y' || choice == 'Y')
    {
        cout << "Save report as : " << endl;
        cout << "1. Save as text file" << endl;
        cout << "2. Save as HTML file" << endl;
        cout << "Enter choice : ";
        cin >> option;

        switch(option)
        {
            case 1 : saveMeanDisplay(mean, total, x);
                     break;
            case 2 : saveMeanDisplay2(mean, total, x);
                     break;
            default : cout << "Invalid input. Please try again." << endl;
            cin.get();cin.get();
            statisticalMenu();
        }
    }
    else
    {
        statisticalMenu();
    }

}

/*
This function checks if the user wishes to save the variance report in text file or html
*/
void saveVar(int &count, double &sumSq, double &sum, double &var)
{
    int option;
    char choice;

    cout << "Do you wish to save report? (Y/N)\n";
    cin >> choice;
    cout << endl << endl;

    if(choice == 'y' || choice == 'Y')
    {
        cout << "Save report as : " << endl;
        cout << "1. Save as text file" << endl;
        cout << "2. Save as HTML file" << endl;
        cout << "Enter choice : ";
        cin >> option;

        switch(option)
        {
            case 1 : saveVarDisplay(count,sumSq,sum,var);
                     break;
            case 2 : saveVarDisplay2(count,sumSq,sum,var);
                     break;
            default : cout << "Invalid input. Please try again." << endl;
            cin.get();cin.get();
            statisticalMenu();
        }
    }
    else
    {
        statisticalMenu();
    }
}

/*
This function checks if the user wishes to save the standard deviation report in text file or html
*/
void saveSD(int &count, double &sumSq, double &sum, double &stdDev)
{
    int option;
    char choice;

    cout << "Do you wish to save report? (Y/N)\n";
    cin >> choice;
    cout << endl << endl;

    if(choice == 'y' || choice == 'Y')
    {
        cout << "Save report as : " << endl;
        cout << "1. Save as text file" << endl;
        cout << "2. Save as HTML file" << endl;
        cout << "Enter choice : ";
        cin >> option;

        switch(option)
        {
            case 1 : saveSDDisplay(count,sumSq,sum,stdDev);
                     break;
            case 2 : saveSDDisplay2(count,sumSq,sum,stdDev);
                     break;
            default : cout << "Invalid input. Please try again." << endl;
            cin.get();cin.get();
            statisticalMenu();
        }
    }
    else
    {
        statisticalMenu();
    }
}


/*
This function checks if the user wishes to save the Pearson's Correlation report in text file or html
*/
void savePC(const int &roww, double &sum_XY, double &sum_X, double &sum_Y, double &squareSum_X, double &squareSum_Y, double &corr)
{
    int option;
    char choice;

    cout << "Do you wish to save report? (Y/N)\n";
    cin >> choice;
    cout << endl << endl;

    if(choice == 'y' || choice == 'Y')
    {
        cout << "Save report as : " << endl;
        cout << "1. Save as text file" << endl;
        cout << "2. Save as HTML file" << endl;
        cout << "Enter choice : ";
        cin >> option;

        switch(option)
        {
            case 1 : savePCDisplay(roww, sum_XY, sum_X, sum_Y, squareSum_X, squareSum_Y, corr);
                     break;
            case 2 : savePCDisplay2(roww, sum_XY, sum_X, sum_Y, squareSum_X, squareSum_Y, corr);
                     break;
            default : cout << "Invalid input. Please try again." << endl;
            cin.get();cin.get();
            statisticalMenu();
        }
    }
    else
    {
        statisticalMenu();
    }
}

/*
This function checks if the user wishes to save the distinct report in text file or html
*/
void saveDistinct()
{
    int option;
    char choice;

    cout << "Do you wish to save report? (Y/N)\n";
    cin >> choice;
    cout << endl << endl;

    if(choice == 'y' || choice == 'Y')
    {
        cout << "Save report as : " << endl;
        cout << "1. Save as text file" << endl;
        cout << "2. Save as HTML file" << endl;
        cout << "Enter choice : ";
        cin >> option;

        switch(option)
        {
            case 1 : saveDistinctDisplay();
                     break;
            case 2 : saveDistinctDisplay2();
                     break;
            default : cout << "Invalid input. Please try again." << endl;
            cin.get();cin.get();
            statisticalMenu();
        }
    }
    else
    {
        statisticalMenu();
    }

}

/*
This function checks if the user wishes to save the the histogram report in text file or html
*/

void saveHistogram()
{
    int option;
    char choice;

    cout << "Do you wish to save report? (Y/N)\n";
    cin >> choice;
    cout << endl << endl;

    if(choice == 'y' || choice == 'Y')
    {
        cout << "Save report as : " << endl;
        cout << "1. Save as text file" << endl;
        cout << "2. Save as HTML file" << endl;
        cout << "Enter choice : ";
        cin >> option;

        switch(option)
        {
            case 1 : saveHistogramDisplay();
                     break;
            case 2 : saveHistogramDisplay2();
                     break;
            default : cout << "Invalid input. Please try again." << endl;
            cin.get();cin.get();
            statisticalMenu();
        }
    }
    else
    {
        statisticalMenu();
    }

}
/*
This function is to generate full HTML report
It initializes and declares all the variable needed for calculation
*/
void report()
{
    getlist();
    // declare all the variable needed for calculation
    double minNum=100,maxNum=0,median,mean=0,total=0,x =0,meanVr=0,var,sumVr=0,sumSq=0,meanSd,varSd,stdDev,sumSd=0,sumSqSd=0;
    int minValue, i, countInMedian = 0,countInVar = 0,countInSd=0;
    clearScreen();
    //calculation of all statistical analysis
    minNumfunc(minNum);
    maxNumfunc(maxNum);
    medianNumfuc(median,minValue,i,countInMedian);
    meanNumfunc(mean,total,x);
    FindVarfunc(meanVr,var,sumVr,sumSq,countInVar);
    findSDfunc(meanSd,varSd,stdDev,sumSd,sumSqSd,countInSd);
    //save file
    string savefile;
    cout << endl << endl;
    cout << "Enter new file name : ";
    cin >> savefile;
    ofstream data ( savefile + ".html",ios::app);
    //output to write as filename.html -> html file
    saveMinDisplay2Report(data,minNum);
    saveMaxDisplay2Report(data,maxNum);
    saveMedianDisplay2Report(data,countInMedian,median);
    saveMeanDisplay2Report(data,mean,total,x);
    saveVarDisplay2Report(data,countInVar,sumSq,sumVr,var);
    saveSDDisplay2Report (data,countInSd,sumSqSd,sumSd,stdDev);
    saveHistogramDisplay2Report(data);
    data.close();

    cout << "Full report saved as " << savefile << ".html!" << endl << "Press ENTER to continue.";
    cin.get();cin.get();
    statisticalMenu();
}










