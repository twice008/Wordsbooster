#include <iostream>
#include <string>
#include <ctime>
using namespace std;
#define DEBUG


int main()
{
/*----------------Декларирование----------------*/ ;
srand(time(NULL));
setlocale(LC_ALL, "ru");
string answer;
int count = 0;
bool alreadyHere;
const int SIZEW = 20;
int z,l ;
string w1 = "theft";
string w1_1 = "кража";
string w2 = "autopsy";
string w2_2 = "вскрытие";
string w3 = "nerd";
string w3_3 = "ботаник";
string w4 = "burglar";
string w4_4 = "грабитель";
string w5 = "otherwise";
string w5_5 = "в противном случае";
string w6 = "assault";
string w6_6 = "нападение";
string w7 = "ordinary";
string w7_7 = "обычный";
string w8 = "straw";
string w8_8 = "соломинка";
string w9 = "fearful";
string w9_9 = "очень бояться";
string w10 = "furious";
string w10_10 = "очень злой";
string w11 = "exasperating";
string w11_11 = "раздажающий";
string w12 = "awful";
string w12_12 = "очень плохой";
string w13 = "gorgeous";
string w13_13 = "очень красивый";
string w14 = "massive";
string w14_14 = "очень большой";
string w15 = "dull";
string w15_15 = "очень скучный";
string w16 = "luminous";
string w16_16 = "очень яркий";
string w17 = "anxious";
string w17_17 = "очень обеспокоенный";
string w18 = "surrounding";
string w18_18 = "близлежащий";
string w19 = "accommodate";
string w19_19 = "вмещать";
string w20 = "duties";
string w20_20 = "обязанности";

/*----------------Массивы----------------*/
string arren [20] {w1,w2,w3,w4,w5,w6,w7,w8,w9,w10,w11,w12,w13,w14,w15,w16,w17,w18,w19,w20};
string arrru [20] {w1_1,w2_2,w3_3,w4_4,w5_5,w6_6,w7_7,w8_8,w9_9,w10_10,w11_11,w12_12,w13_13,w14_14,w15_15,w16_16,w17_17,w18_18,w19_19,w20_20};
int amountof [SIZEW];



#ifdef DEBUG
    cout<<"-------------------------------------------"<< endl;
    cout<<"------------------DEBUG--------------------"<< endl;
    cout<<"-------------------------------------------"<< endl;
    cout<<"Версия 2.1"<< endl;
    cout<<"Интегрированная database"<< endl;
    cout<<"Счетчик V1.0"<< endl;
    cout<<"Уникальность вывода 'database - end'"<< endl;
    cout<<"Автоматическая проверка"<< endl;
    cout<<"-------------------------------------------"<< endl;
#endif 



/*----------------Приветсвтие----------------*/
cout << "Ты готов?" << "\t" << "yes / no" << endl;
cin>>answer;
string answeryes = "yes";
string answerno = "no";

/*----------------Логика----------------*/
if (answer==answeryes)
{
cout << endl;
cout << "На экране появятся задания, следуйте им."<< endl;
cout << "----------Специальные функции---------"<< endl;
cout << endl;
cout << "Для подсказки, введи |помощь|" << endl;
cout << "Список добавленных слов (русских), введите |listR|" << endl;
cout << "Список добавленных слов (английских), введите |listE|" << endl;
cout << endl;

/*Заполнение массива уникальными числами*/
for(int i = 0; i<20;)
{
    alreadyHere = false;
    int s = rand() % 20;
    for(int j = 0; j<i; j++)
    {
        if (amountof [j] == s)
        {
            alreadyHere = true;
            break;
        }
    }
    if(!alreadyHere)
    {
        amountof [i] = s;
        i++;
    }
}


/*IO*/
tryagainonemoretime:
z = amountof [count];  
cout << "---------Необходимо перевести---------"<< endl;
cout << arrru [z] << ".\t" <<endl;
cout << "Слово № - "<< z+1 <<endl;
cout << "------------Введите ответ------------"<< endl;
string q;
tryagain :
cin>>q;

/*Помощь*/
if(q == "помощь") 
{
    cout << endl;
    cout << arren [z] << ".\t" <<"------Подсказка------"<< endl;
    cout << endl;
}

/*ListR*/
if(q == "listR") 
{
    cout << endl;
    cout <<"Вот все слова, которые вы добавили."<< endl;
    cout << "------------Начало------------"<< endl; 
    for(int i = 0; i<SIZEW; i++)
    {
    cout <<arrru [i]<< endl;
    }
    cout << "------------Конец------------"<< endl;
    cout <<"Внимание! В списке на данный момент "<< SIZEW << " слов." << endl;
    cout << endl;
    goto tryagainonemoretime;
}

/*listE*/
if(q == "listE") 
{
    cout << endl;
    cout <<"Here are all words which you added."<< endl;
    cout << "------------Start------------"<< endl; 
    for(int i = 0; i<SIZEW; i++)
    {
    cout <<arren [i]<< endl;
    }
    cout << "------------End------------"<< endl;
    cout <<"Attention! There are "<< SIZEW << " words in the list." << endl;
    cout << endl;
    goto tryagainonemoretime;
}

/*Правильный ответ*/
if(q == arren [z]) 
{
cout << endl;
cout << "good"<< endl; 
cout << endl;

/*Счетчик слов*/
count++;
    if(count<=1)
    {
    cout<< "Вы повторили  - " << count << " слово" <<endl; 
    cout << endl;
    }
    if(count == 2)
    {
    cout<< "Вы повторили  - " << count << " слова" <<endl; 
    cout << endl;
    }
    if(count == 3)
    {
    cout<< "Вы повторили  - " << count << " слова" <<endl; 
    cout << endl;
    }
    if(count == 4)
    {
    cout<< "Вы повторили  - " << count << " слова" <<endl; 
    cout << endl;
    }
    if(count>=5)
    {
    cout<< "Вы повторили  - " << count << " слов" <<endl;
    cout << endl;
    }
cout << endl;
goto tryagainonemoretime;
}

/*Неправильный ответ*/
else 
{
cout << "Попробуй еще раз"<< endl;
goto tryagain;
}
}

/*----------------Отрицательный ответ----------------*/
if (answer==answerno)
{
cout << "А зря"<< endl;
return 0;
}

/*----------------Функциональные данные----------------*/
system("pause");
return 0;
}











