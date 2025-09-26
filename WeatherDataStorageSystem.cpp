#include <iostream>
using namespace std;

class WeatherManagementSystem{
    string Date[5];
    string City[5];
    double Temperature[5];
    int count;

public:

    WeatherManagementSystem(){
        count = 0;
    }

    void Insert(string Date,string City,double Temperature){
        this->Date[count] = Date;
        this->City[count] = City;
        this->Temperature[count] = Temperature;
        count++;
        cout << "Data inserted successfully" << endl;
    }

    void Retrieve(string Date,string City){
        bool found = false;
        for (int i = 0; i < count;i++){
            if(this->Date[i]==Date && this->City[i]==City){
                cout << "Temperature->" << Temperature[i] << endl;
                found = true;
                break;
            }
        }
        if(!found){
            cout << "Data not founded" << endl;
        }
    }

    void Delete(string Date,string City){
        bool found = false;
        for (int i = 0; i < count;i++){
            if (this->Date[i] == Date && this->City[i]==City){
                for (int j = i; j < count - 1;j++){
                    this->Date[j] = Date[j - 1];
                    this->City[j] = City[j - 1];
                    this->Temperature[j] = Temperature[j - 1];
                }
                count--;
                found = true;
                cout << "Data deleted successfully" << endl;
                break;
            }
        }
        if(!found){
            cout << "Data not founded" << endl;
        }
    }

    void DisplayChoice(){
        cout << "1.Insert" << endl;
        cout << "2.Retrieve" << endl;
        cout << "3.Delete" << endl;
        cout << "4.Create an 2D Array" << endl;
        cout << "5.Row Access of 2D Array" << endl;
        cout << "6.Column Access of 2D Array" << endl;
        cout << "7.Handle Sparse Data of 2D Array" << endl;
        cout << "8.Analyze Complexity" << endl;
        cout << "9.Exit" << endl;
    }
};


class Weather2DArray{
    int Rows, Cols;
    int arr[5][5];

    public:
    Weather2DArray(int Rows,int Cols){
        this->Rows = Rows;
        this->Cols = Cols;
    }

    void populateArray(){
        cout << "Enter temperature vaules:" << endl;
        for (int i = 0; i < Rows;i++){
            for (int j = 0; j < Cols;j++){
                cin >> arr[i][j];
            }
        }
    }

    void rowMajorAccess(){
        for (int i = 0; i < Rows;i++){
            for (int j = 0; j < Cols;j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    void columnMajorAccess(){
        for (int i = 0; i < Rows;i++){
            for (int j = 0; j < Cols;j++){
                cout << arr[j][i] << " ";
            }
            cout << endl;
        }
    }

    void handleSparseData(){
        for (int i = 0; i < Rows;i++){
            for (int j = 0; j < Cols;j++){
                if(arr[i][j]==-1){
                    cout << "NULL";
                }
                else{
                    cout << arr[i][j] << " ";
                }
            }
            cout << endl;
        }
    }

    void analyzeComplexity(){
        cout << "Time Complexity| Insert | 0(1)" << endl;
        cout << "Time Complexity| Retrieve | 0(1)" << endl;
        cout << "Time Complexity| Delete | 0(n)" << endl;
        cout<< "Time Complexity| Row&Column Access | 0(rows*cols)" << endl;
        cout<<"Space Complexity | 0(rows*cols)"<<endl;
    }
};

int main(){
    WeatherManagementSystem obj;
    Weather2DArray arr(5,5);
    int choice;
    do{
        obj.DisplayChoice();
        cout << "Enter choice: ";
        cin >> choice;
        switch(choice){
            case 1: {
                string Date;
                cout << "Enter date: ";
                cin >> Date;

                string City;
                cout << "Enter city: ";
                cin >> City;

                double Temperature;
                cout << "Enter temperature: ";
                cin >> Temperature;

                obj.Insert(Date, City, Temperature);
                break;
            }
            case 2: {
                string Date;
                cout << "Enter date: ";
                cin >> Date;

                string City;
                cout << "Enter City: ";
                cin >> City;

                obj.Retrieve(Date, City);
                break;
            }
            case 3: {
                string Date;
                cout << "Enter date: ";
                cin >> Date;

                string City;
                cout << "Enter city: ";
                cin >> City;

                obj.Delete(Date, City);
                break;
            }
            case 4:
                arr.populateArray();
                break;
            case 5:
                arr.rowMajorAccess();
                break;
            case 6:
                arr.columnMajorAccess();
                break;
            case 7:
                arr.handleSparseData();
                break;
            case 8:
                arr.analyzeComplexity();
                break;
            case 9:
                cout << "Exited..." << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 9);
}