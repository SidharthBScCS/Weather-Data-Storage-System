// Coded By: | Sidharth Krishna S | 2401720003 | BSc Computer Science | Data Structures | Theory Assignment 1| //

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
        for(int i=0;i<count;i++){
            if(this->Date[i]==Date && this->City[i]==City){
                cout << "Date -> " << this->Date[i] << endl;
                cout << "City -> " << this->City[i] << endl;
                cout << "Temperature -> " << this->Temperature[i] << endl;
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
        for(int i=0;i<count;i++){
            if(this->Date[i]==Date && this->City[i]==City){
                for(int j=i;j<count-1;j++){
                    this->Date[j]=this->Date[j+1];
                    this->City[j]=this->City[j+1];
                    this->Temperature[j]=this->Temperature[j+1];
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

    string* getDates(){ return Date; }
    string* getCities(){ return City; }
    double* getTemperatures(){ return Temperature; }
    int getCount(){ return count; }

    void DisplayChoice(){
        cout << "1.Insert" << endl;
        cout << "2.Retrieve" << endl;
        cout << "3.Delete" << endl;
        cout << "4.Row Access of 2D Array" << endl;
        cout << "5.Column Access of 2D Array" << endl;
        cout << "6.Analyze Complexity" << endl;
        cout << "7.Exit" << endl;
    }
};

class Weather2DArray{
    int Rows,Cols;
    int arr[5][5];
    string RowNames[5];
    string ColNames[5];

public:
    Weather2DArray(int r,int c){
        Rows=0;
        Cols=0;
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                arr[i][j]=-1;
            }
        }
    }

    void populateArray(string Dates[],string Cities[],double Temperatures[],int Count){
        Rows=0;
        Cols=0;

        for(int i=0;i<Count;i++){
            bool cityExists=false;
            for(int r=0;r<Rows;r++){
                if(RowNames[r]==Cities[i]){
                    cityExists=true;
                    break;
                }
            }
            if(!cityExists){
                RowNames[Rows++]=Cities[i];
            }
        }

        for(int i=0;i<Count;i++){
            bool dateExists=false;
            for(int c=0;c<Cols;c++){
                if(ColNames[c]==Dates[i]){
                    dateExists=true;
                    break;
                }
            }
            if(!dateExists){
                ColNames[Cols++]=Dates[i];
            }
        }

        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                arr[i][j]=-1;
            }
        }

        for(int i=0;i<Count;i++){
            int row=-1,col=-1;
            for(int r=0;r<Rows;r++){
                if(RowNames[r]==Cities[i]){
                    row=r;
                    break;
                }
            }
            for(int c=0;c<Cols;c++){
                if(ColNames[c]==Dates[i]){
                    col=c;
                    break;
                }
            }
            if(row!=-1 && col!=-1){
                arr[row][col]=Temperatures[i];
            }
        }
    }

    void rowMajorAccess(){
        cout << "       ";
        for(int j=0;j<Cols;j++){
            cout << ColNames[j] << " ";
        }
        cout << endl;
        for(int i=0;i<Rows;i++){
            cout << RowNames[i] << "  ";
            for(int j=0;j<Cols;j++){
                if(arr[i][j]==-1) cout << "NULL ";
                else cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    void columnMajorAccess(){
        cout << "       ";
        for(int i=0;i<Rows;i++){
            cout << RowNames[i] << " ";
        }
        cout << endl;
        for(int j=0;j<Cols;j++){
            cout << ColNames[j] << "  ";
            for(int i=0;i<Rows;i++){
                if(arr[i][j]==-1) cout << "NULL ";
                else cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    void handleSparseData(){
        cout << "       ";
        for(int j=0;j<Cols;j++){
            cout << ColNames[j] << " ";
        }
        cout << endl;
        for(int i=0;i<Rows;i++){
            cout << RowNames[i] << "  ";
            for(int j=0;j<Cols;j++){
                if(arr[i][j]==-1) cout << "NULL ";
                else cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    void analyzeComplexity(){
        cout << "Time Complexity| Insert | O(1)" << endl;
        cout << "Time Complexity| Retrieve | O(1)" << endl;
        cout << "Time Complexity| Delete | O(n)" << endl;
        cout << "Time Complexity| Row&Column Access | O(rows*cols)" << endl;
        cout << "Space Complexity | O(rows*cols)" << endl;
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
            case 1:{
                string Date,City;
                double Temperature;
                cout << "Enter date: "; cin >> Date;
                cout << "Enter city: "; cin >> City;
                cout << "Enter temperature: "; cin >> Temperature;
                obj.Insert(Date,City,Temperature);
                arr.populateArray(obj.getDates(),obj.getCities(),obj.getTemperatures(),obj.getCount());
                break;
            }
            case 2:{
                string Date,City;
                cout << "Enter date: "; cin >> Date;
                cout << "Enter city: "; cin >> City;
                obj.Retrieve(Date,City);
                break;
            }
            case 3:{
                string Date,City;
                cout << "Enter date: "; cin >> Date;
                cout << "Enter city: "; cin >> City;
                obj.Delete(Date,City);
                arr.populateArray(obj.getDates(),obj.getCities(),obj.getTemperatures(),obj.getCount());
                break;
            }
            case 4:{
                arr.handleSparseData();
                break;
            }
            case 5:{
                arr.columnMajorAccess();
                break;
            }
            case 6:{
                arr.analyzeComplexity();
                break;
            }
            case 7:{
                cout << "Exited..." << endl;
                break;
            }
            default:{
                cout << "Invalid choice" << endl;
            }
        }
    } while(choice!=7);
}
