#include <iomanip>
#include <iostream>
using namespace std;
void showMainMenu () 
    { cout<<"=================================\n";
    cout<<"         UNIT CONVERTER\n";
    cout<<"=================================\n";
    cout<<endl;
    cout<<"Select a conversion category:\n";
    cout<<endl;
    cout<<"[1] Distance\n";
    cout<<"[2] Temperature\n";
    cout<<"[3] Weight\n";
    cout<<"[4] Speed\n";
    cout<<"[5] Volume\n";
    cout<<"[6] Area\n";
    cout<<"[7] Time\n";
    cout<<"[0] Exit\n";
    cout<<endl;
    cout<<"---------------------------------\n";
    cout<<"Enter your choice (0-7): ";
    }
int main() {
    long double result,value,mm,celsius,mg,ms,l,m2,s;
    int  to,from,choice;
    char again;

    while (true){
    showMainMenu ();
    if (!(cin>>choice))
        {
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
    while (choice>7 || choice<0)
        {cout<<"INVALID CATEGORY!\n";
                cin>>choice;
        }
        if (choice==0)
            {cout<<"\nThank you for using Unit Converter!\n";
                break;
            }
        if (choice==1)
        {   cout<<"1. Millimeter\n";
            cout<<"2. Centimeter\n";
            cout<<"3. Decimeter\n";
            cout<<"4. Meter\n";
            cout<<"5. Inch\n";
            cout<<"6. Foot\n";
            cout<<"7. Yard\n";
    cout<<"Choose the unit you want to convert from:\n";
            cin>>from;
            while (from>7 || from<1)
                {cout<<"INVALID UNIT!\n";
                cin>>from;
                }
    cout<<"Choose the unit you want to convert to:\n";
            cin>>to;
            while (to>7 || to<1)
                {cout<<"INVALID UNIT!\n";
                cin>>to;
                }
    cout<<"Enter the value: ";
            cin>>value;
            if (from==1)
                mm=value;
            else if (from==2)
                mm=value*10;
            else if (from==3)
                mm=value*100; 
            else if (from==4)
                mm=value*1000;
            else if (from==5)
                mm=value*25.4;
            else if (from==6)
                mm=value*304.8;
            else if (from==7)
                mm=value*914.4;

                if (to==1)
                    result=mm;
                else if (to==2)
                    result=mm/10;
                else if (to==3)
                    result=mm/100;
                else if (to==4)
                    result=mm/1000;
                else if (to==5)
                    result=mm/25.4;
                else if (to==6)
                    result=mm/304.8;
                else if (to==7)
                    result=mm/914.4;
         cout<<fixed<<setprecision(4);
    cout<<"\nConversion result: "<<result<<endl;
            }
        if (choice==2)
        {   cout<<"1. Celsius\n";
            cout<<"2. Fahrenheit\n";
            cout<<"3. Kelvin\n";
            cout<<"4. Rankine\n";
    cout<<"Choose the unit you want to convert from:\n";
            cin>>from;
            while (from>4 || from<1)
                {cout<<"INVALID UNIT!\n";
                cin>>from;
                }
    cout<<"Choose the unit you want to convert to:\n";
            cin>>to;
            while (to>4 || to<1)
                {cout<<"INVALID UNIT!\n";
                cin>>to;
                }
    cout<<"Enter the value: ";
            cin>>value;
            if (from==1)
                celsius=value;
            else if (from==2)
                celsius=(value-32)*5.0/9.0;
            else if (from==3)
                celsius=value-273.15;
            else if (from==4)
                celsius=(value - 491.67)*5.0/9.0;

                if (to==1)
                    result=celsius;
                else if (to==2)
                    result=celsius*9.0/5.0+32;
                else if (to==3)
                    result=celsius+273.15;
                else if (to==4)
                    result=(celsius + 273.15)*9.0/5.0;
            cout<<fixed<<setprecision(4);
cout<<"\nConversion result: "<<result<<endl;
        }
            if (choice==3)
            {   cout<<"1. Milligram\n";
                cout<<"2. Gram\n";
                cout<<"3. Kilogram\n";
                cout<<"4. Ton\n";
                cout<<"5. Pound\n";
                cout<<"6. Ounce\n";
                cout<<"7. Carat\n";
    cout<<"Choose the unit you want to convert from:\n";
                cin>>from;
            while (from>7 || from<1)
                {cout<<"INVALID UNIT!\n";
                cin>>from;
                }
    cout<<"Choose the unit you want to convert to:\n";
                cin>>to;
            while (to>7 || to<1)
                {cout<<"INVALID UNIT!\n";
                cin>>to;
                }
    cout<<"Enter the value: ";
                cin>>value;
            if (from==1)
                mg=value;
            else if (from==2)
                mg=value*1000;
            else if (from==3)
                mg=value*1000000;
            else if (from==4)
                mg=value*1000000000;
            else if (from==5)
                mg=value*453592.37;
            else if (from==6)
                mg=value*28349.523125;
            else if (from==7)
                mg=value*200;

                if (to==1)
                    result=mg;
                else if (to==2)
                    result=mg/1000;
                else if (to==3)
                    result=mg/1000000;
                else if (to==4)
                    result=mg/1000000000;
                else if (to==5)
                    result=mg/453592.37;
                else if (to==6)
                    result=mg/28349.523125;
                else if (to==7)
                    result=mg/200;
            cout<<fixed<<setprecision(4);
cout << "\nConversion result: "<<result<<endl;
        }
            if (choice==4)
            {   cout<<"1. Meters per second\n";
                cout<<"2. Kilometers per hour\n";
                cout<<"3. Miles per hour\n";
                cout<<"4. Feet per second\n";
                cout<<"5. Knots\n";
    cout<<"Choose the unit you want to convert from:\n";
                cin>>from;
            while (from>5 || from<1)
               {cout<<"INVALID UNIT!\n";
                cin>>from;
               }
    cout<<"Choose the unit you want to convert to:\n";
               cin>>to;
            while (to>5 || to<1)
               {cout<<"INVALID UNIT!\n";
                cin>>to;
               }
    cout<<"Enter the value: ";
               cin>>value;
            if (from==1)
                ms=value;
            else if (from==2)
                ms=value/3.6;
            else if (from==3)
                ms=value*0.44704;
            else if (from==4)
                ms=value*0.3048;
            else if (from==5)
                ms=value*0.514444;
            
            if (to==1)
                result=ms;
            else if (to==2)
                result=ms*3.6;
            else if (to==3)
                result=ms/0.44704;
            else if (to==4)
                result=ms/0.3048;
            else if (to==5)
                result=ms/0.514444;
        cout<<fixed<<setprecision(4);
cout<<"\nConversion result: "<<result<<endl;
            }
            if (choice==5)
            {   cout<<"1. Cubic meter\n";
                cout<<"2. Cubic centimeter\n";
                cout<<"3. Cubic decimeter\n";
                cout<<"4. Liter\n";
                cout<<"5. Milliliter\n"; 
                cout<<"6. Gallon\n";
                cout<<"7. Fluid ounce\n";
    cout<<"Choose the unit you want to convert from:\n";
                cin>>from;
            while (from>7 || from<1)
                {cout<<"INVALID UNIT!\n";
                 cin>>from;
                }
    cout<<"Choose the unit you want to convert to:\n";
                cin>>to;
            while (to>7  || to<1)
                {cout<<"INVALID UNIT!\n";
                 cin>>to;
                }
        cout<<"Enter the value: ";
                cin>>value;
            if (from==1)
                l=value*1000;
            else if (from==2)
                l=value/1000;
            else if (from==3)
                l=value;
            else if (from==4)
                l=value;
            else if (from==5)
                l=value/1000;
            else if (from==6)
                l=value*3.78541;
            else if (from==7)
                l=value*0.0295735;
            
            if (to==1)
                result=l/1000;
            else if (to==2)
                result=l*1000;
            else if (to==3)
                result=l;
            else if (to==4)
                result=l;
            else if (to==5)
                result=l*1000;
            else if (to==6)
                result=l/3.78541;
            else if (to==7)
                result=l/0.0295735; 
        cout<<fixed<<setprecision(4);
cout<<"\nConversion result: "<<result<<endl;
            }
            if (choice==6)
            {   cout<<"1. Square meter\n";
                cout<<"2. Square kilometer\n";
                cout<<"3. Square inch\n";
                cout<<"4. Square foot\n";
                cout<<"5. Are\n";
                cout<<"6. Hectare\n";
                cout<<"7. Acre\n";
    cout<<"Choose the unit you want to convert from:\n";
                cin>>from;
            while (from>7 || from<1)
                {cout<<"INVALID UNIT!\n";
                 cin>>from;
                }
    cout<<"Choose the unit you want to convert to:\n";
                cin>>to;
            while (to>7 || to<1)
                {cout<<"INVALID UNIT!\n";
                 cin>>to;
                }
    cout<<"Enter the value: ";
                cin>>value;
            if (from==1)
                m2=value;
            else if (from==2)
                m2=value*1000000;
            else if (from==3)
                m2=value/1550.0031;
            else if (from==4)
                m2=value/10.764;
            else if (from==5)
                m2=value*100;
            else if (from==6)
                m2=value*10000;
            else if (from==7)
                m2=value*4046.8564;

            if (to==1)
                result=m2;
            else if (to==2)
                result=m2/1000000;
            else if (to==3)
                result=m2*1550.0031;
            else if (to==4)
                result=m2*10.764;
            else if (to==5)
                result=m2/100;
            else if (to==6)
                result=m2/10000;
            else if (to==7)
                result=m2/4046.8564;
           cout<<fixed<<setprecision(4);
    cout<<"\nConversion result: "<<result<<endl;
            }
            if (choice==7)
            {   cout<<"[1] Millisecond\n";
                cout<<"[2] Second\n";
                cout<<"[3] Minute\n";
                cout<<"[4] Hour\n";
                cout<<"[5] Day\n";
                cout<<"[6] Week\n";
                cout<<"[7] Fortnight\n";
    cout<<"Choose the unit you want to convert from:\n";
                cin>>from;
            while (from>7 || from<1)
                {   cout<<"INVALID UNIT!\n";
                    cin>>from;
                }
    cout<<"Choose the unit you want to convert to:\n";
                cin>>to;
            while (to>7 || to<1)
                {   cout<<"INVALID UNIT!\n";
                    cin>>to;
                }
    cout<<"Enter the value: ";
                    cin>>value;
                if (from==1)
                    s=value/1000;
                else if (from==2)
                    s=value;
                else if (from==3)
                    s=value*60;
                else if (from==4)
                    s=value*3600;
                else if (from==5)
                    s=value*3600*24;
                else if (from==6)
                    s=value*3600*24*7;
                else if (from==7)
                    s=value*3600*24*14;
                
                if (to==1)
                    result=s*1000;
                else if (to==2)
                    result=s;
                else if (to==3)
                    result=s/60;
                else if (to==4)
                    result=s/3600;
                else if (to==5)
                    result=s/(3600*24);
                else if (to==6)
                    result=s/(3600*24*7);
                else if (to==7)
                    result=s/(3600*24*14);
        cout<<fixed<<setprecision(4);
cout<<"\nConversion result: "<<result<<endl;
            }
            cout<<"\nReturn to main menu? (Y/N): ";
            cin>>again;
            if (again!='y' && again!='Y')
            {   cout<<"\nThank you for using Unit Converter!\n";
                break;
            }
    }
    return 0;
}