#include <std_lib_facilities.h>

int main()
{
    //1
    cout << "Enter the name of the person you want to write to (followed by 'enter'):\n";
    string first_name;
    cin >> first_name;
    cout << "\nDear " << first_name << ",\n";

    //2
    cout << "How are you?\n" << "I am fine.\n" << "I miss you.\n\n";

    //3
    string friend_name;
    cout << "\nEnter your another friend's name (followed by 'Enter'):\n";
    cin >> friend_name;
    cout << "\nHave you seen " << friend_name << " lately?\n";

    //4
    char friend_sex = 0;
    cout << "\nEnter an 'm' if your friend is male and an 'f' if your friend is female:\n";
    cin >> friend_sex;
    if(friend_sex == 'm') cout << "\nIf you see " << friend_name << " please ask him to call me.\n";
    if(friend_sex == 'f') cout << "\nIf you see " << friend_name << " please ask her to call me.\n";

    //5
    cout << "\nEnter the age of your friend: ";
    int age;
    cin >> age;
    if(age <= 0 || age >= 110) simple_error("You're kidding!");
    else cout << "\nI hear you just had a birthday and you are " << age << " years old.\n";

    //6
    if (age < 12) cout << "Next year you will be " << age+1 <<".\n";
    else if (age == 17) cout << "Next year you will be able to vote.\n";
    else if (age <= 70) cout << "I hope you are enjoying retirement.\n";

    //7
    cout << "\nYours sincerely,\n\n" << "Zsolt Schachinger";
    return 0;
}
