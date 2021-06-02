#include <iostream>

using namespace std;

template <class T, class T2>
class Dictionary {
    T key[100];
    T2 value[100];
    int count = 0;
public:
    Dictionary() = default;

    T &operator[](T key_in) {
        for (int i = 0; i < count; i++)
        if (key[i] == key_in) return value[i];

        key[++count] = key_in;
        return value[count];
    }

    void info() {
        for (int i = 1; i <= count; i++)
        cout << key[i] << " : " << value[i] << endl;
    }

};

int main() {

    Dictionary<string, string> object;
    object["apple"] =  "alma";
    object["ball"] =  "top";
    object["task"] =  "tapsiriqlar";
    object["boy"] =  "oglan";
    object.info();

    cout << object["apple"];

    return 0;
}
