#include <iostream>
#include <string>
#include <list>
using namespace std;

int getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

struct People
{
    string name;
    int year;
};

class Formalist
{
protected:
    People m_people;
public:
    Formalist(People people) : m_people(people) {}
    virtual ~Formalist() {}
    // virtual const string getMessage() { return name.; }
    virtual void myStats() {
        if (m_people.year == 21 || m_people.year == 31)
        {
            cout << "Меня зовут " << m_people.name << ", мой возраст " << m_people.year << " год, и я формалист";
        }
        else if (m_people.year == 22 || m_people.year == 23 || m_people.year == 24 || m_people.year == 32 || m_people.year == 33 || m_people.year == 34)
        {
            cout << "Меня зовут " << m_people.name << ", мой возраст " << m_people.year << " года, и я формалист";
        }
        else
        {
            cout << "Меня зовут " << m_people.name << ", мой возраст " << m_people.year << " лет, и я формалист";
        }
    }

    // virtual string welcome(const Formalist& people) { return "Нет приветствия"; }
    // virtual string getName() const { return m_people.name; }
    // virtual int getAge() const { return m_people.year; }
    friend ostream& operator<< (ostream& out, const Formalist& tip);
};

class Neformals : public Formalist
{
    //protected:
        //People m_nefor;
public:
    Neformals(People nefor) : Formalist(nefor)
    {

    }
    virtual ~Neformals() {}

    virtual const string getMessage() { return "hello"; }
    virtual void myStats() {
        if (m_people.year == 21 || m_people.year == 31)
        {
            cout << "Меня зовут " << m_people.name << ", мой возраст " << m_people.year << " год, и я формалист";
        }
        else if (m_people.year == 22 || m_people.year == 23 || m_people.year == 24 || m_people.year == 32 || m_people.year == 33 || m_people.year == 34)
        {
            cout << "Меня зовут " << m_people.name << ", мой возраст " << m_people.year << " года, и я формалист";
        }
        else
        {
            cout << "Меня зовут " << m_people.name << ", мой возраст " << m_people.year << " лет, и я формалист";
        }
    }
    // string welcome(const Formalist& people) { return "Привет, " + people.getName(); }
};

class Realist : public Formalist
{
protected:
    // People m_real;
public:
    Realist(People realist) : Formalist(realist)
    {

    }
    virtual ~Realist() {}

    virtual const string getMessage() { return "hello"; }
    virtual void myStats() {
        if (m_people.year == 21 || m_people.year == 31)
        {
            cout << "Меня зовут " << m_people.name << ", мой возраст " << m_people.year << " год, и я формалист";
        }
        else if (m_people.year == 22 || m_people.year == 23 || m_people.year == 24 || m_people.year == 32 || m_people.year == 33 || m_people.year == 34)
        {
            cout << "Меня зовут " << m_people.name << ", мой возраст " << m_people.year << " года, и я формалист";
        }
        else
        {
            cout << "Меня зовут " << m_people.name << ", мой возраст " << m_people.year << " лет, и я формалист";
        }
    }
    // string welcome(const Formalist& people) { return "Привет, " + people.getName(); }
};

ostream& operator<< (ostream& out, const Formalist& tip)
{
    out << tip.m_people.name << tip.m_people.year;
    return out;
}

/*void Output(Formalist const& tip)
{
    cout << tip.myStats();
}*/

int main()
{
    setlocale(0, "ru");
    srand(static_cast<unsigned int>(time(0)));
    rand();
    int year1 = getRandomNumber(20, 40);
    int year2 = getRandomNumber(20, 40);
    int year3 = getRandomNumber(20, 40);
    int year4 = getRandomNumber(20, 40);
    int year5 = getRandomNumber(20, 40);
    int year6 = getRandomNumber(20, 40);
    int year7 = getRandomNumber(20, 40);
    int year8 = getRandomNumber(20, 40);
    int year9 = getRandomNumber(20, 40);
    int year10 = getRandomNumber(20, 40);
    /*list<People>names{{"Александр",year1},{"Андрей", year2}, {"Анастасия", year3}, {"Ирина", year4}, {"Наталья", year5},
        {"Павел",year6}, {"Роман", year7}, {"Светлана", year8}, {"Сергей", year9}, {"Татьяна", year10 }};*/
        // Formalist one(names);
    People names1 = { {"Александр"},year1 };
    People names2 = { {"Андерй"}, year2 };
    People names3 = { {"Анастасия"}, year3 };
    People names4 = { {"Ирина"}, year4 };
    People names5 = { {"Наталья"},year5 };
    People names6 = { {"Павел"}, year6 };
    People names7 = { {"Роман"}, year7 };
    People names8 = { {"Светлана"}, year8 };
    People names9 = { {"Сергей"}, year9 };
    People names10 = { {"Татьяна"}, year10 };

    Formalist one{ names1 };
    Realist two(names2);
    Neformals three(names3);
    Formalist four(names4);
    Realist five(names5);
    Neformals six(names6);
    Realist seven(names7);
    Formalist eight(names8);
    Realist nine(names9);
    Formalist ten(names10);
    one.myStats();
    cout << "\n";
    two.myStats();
    cout << "\n";
    three.myStats();
    cout << "\n";
    four.myStats();
    cout << "\n";
    five.myStats();
    cout << "\n";
    six.myStats();
    cout << "\n";
    seven.myStats();
    cout << "\n";
    eight.myStats();
    cout << "\n";
    nine.myStats();
    cout << "\n";
    ten.myStats();
}