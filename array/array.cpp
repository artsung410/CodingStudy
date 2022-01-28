
#include <iostream>

using namespace std;

//struct Rectangle
//{
//    int length;
//    int width;
//};

int main()
{
    //cout << sizeof(Rectangle) << endl;

    //Rectangle rect_arr[10];

    //cout << sizeof(rect_arr) << endl;

    //rect_arr[0].length = 1;
    //rect_arr[0].width = 2;

    // ------------------------------------
    //int my_array[5] = { 1, 2, 3, 4, 5 };

    //cout << my_array[0] << endl;
    // ------------------------------------

    //const int num_students = 5;
    int scores[] = { 84, 92, 76, 81, 56 };
    
    const int num_students = sizeof(scores) / sizeof(int);

    int max_score = 0; // min_score
    int total_score = 0;

    for (int i = 0; i < num_students; ++i)
    {
        total_score += scores[i]; // 평균 구하는 반복문
        //max_score = max_score < scores[i] ? scores[i] : max_score;
        if (max_score < scores[i]) max_score = scores[i];

    }

    double avg_score = static_cast<double>(total_score) / num_students;

    cout << avg_score << endl;

    cout << max_score << endl;

    return 0;
}

