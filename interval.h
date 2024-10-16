#include <vector>
using namespace std;

template <typename T>
T min(vector<T> &arr)
{
    T min_el = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < min_el)
            min_el = arr[i];
    }
    return min_el;
}

template <typename T>
T max(vector<T> &arr)
{
    T max_el = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > max_el)
            max_el = arr[i];
    }
    return max_el;
}

class binary
{
public:
    binary(vector<int> vec1, vector<int> vec2)
    {
        this->a = vec1;
        this->b = vec2;
    }
    vector<int> addition()
    {
        vector<int> res;
        res.push_back(a[0] + b[0]);
        res.push_back(a[1] + b[1]);
        return res;
    }

    vector<int> subtraction()
    {
        vector<int> res;
        res.push_back(a[0] - b[1]);
        res.push_back(a[1] - b[0]);
        return res;
    }

    vector<int> multiplication()
    {
        vector<int> products = {a[0] * b[0], a[0] * b[1], a[1] * b[0], a[1] * b[1]};

        int minim = min(products);
        int maxim = max(products);

        vector<int> res;
        res.push_back(minim);
        res.push_back(maxim);
        return res;
    }

    vector<float> division()
    {
        vector<float> a_float;
        vector<float> b_float;
        for (int i = 0; i < a.size(); i++)
        {
            a_float.push_back(static_cast<float>(a[i]));
            b_float.push_back(b[i] == 0 ? 0 : 1 / static_cast<float>(b[i]));
        }

        vector<float> mult = {a_float[0] * b_float[0], a_float[0] * b_float[1], a_float[1] * b_float[0], a_float[1] * b_float[1]};

        float minim = min(mult);
        float maxim = max(mult);

        vector<float> res;
        res.push_back(minim);
        res.push_back(maxim);
        return res;
    }

private:
    vector<int> a;
    vector<int> b;
};