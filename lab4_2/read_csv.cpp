#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

void readCSV(string filename){
    cout << "\nReading from the " << "\""<< filename << "\"" << " file:\n" << endl; 
    fstream fin;

    fin.open(filename, ios::in);

    if (fin.is_open()){
        string row, record;
    
        while (fin >> row){
            istringstream rowStream(row);
            while (getline(rowStream, record, ',')){
                cout << record << "\t";
            };
            cout << endl;
        }
        
        fin.close();
    }else {
        cout << "File not found" << endl;
    }
}

void writeCSV(string filename){
    cout << "\nWriting into the " << "\""<< filename << "\"" << " file:\n" << endl; 
    
    fstream fout;
    fout.open(filename, ios::out|ios::app);
    
    
    if (fout.is_open()){
        string data, word;
        
        cout << "Enter the values about the student\n";
        cout << "Name, Age, Grade, Email (use space to separate): ";
        getline(cin, data);
        
        stringstream s(data);
        while (s >> word){
            fout << word << ",";
        }
        fout << "\n";
        
        fout.close();

    }else {
        cout << "File not found" << endl;
    }
}

int main(){
    string filename = "./csv/read.csv";
    writeCSV(filename);
    readCSV(filename);
    
    return 0;
}