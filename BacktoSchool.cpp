#include <iostream>
#include <string>
using namespace std;
int main() {
    string choice;

    cout << "Would you like me to read a back-to-school poem? (Yes/No): ";
    cin >> choice;

    if (choice == "yes" || choice == "Yes" || choice == "YES") {
        cout << "Back to School (High School Edition)" << endl;
        cout << "------------------------------------" << endl;

        cout << "As summer's warmth begins to fade," << endl;
        cout << "In these hallowed halls, our dreams are made." << endl;
        cout << "With bags in hand and hearts so bright," << endl;
        cout << "We step into the morning light." << endl << endl;

        cout << "New friends to meet, lessons to learn," << endl;
        cout << "In classrooms where our minds will churn." << endl;
        cout << "From maths to science, art, and more," << endl;
        cout << "We'll strive to reach wisdom's shore." << endl << endl;

        cout << "In uniform, we stand so tall," << endl;
        cout << "Ready to conquer, ready to enthrall." << endl;
        cout << "With every challenge that we face," << endl;
        cout << "We'll find our strength, we'll win the race." << endl << endl;

        cout << "Teachers guide with knowledge vast," << endl;
        cout << "The lessons of now and those of the past." << endl;
        cout << "They light the way, inspire our quest," << endl;
        cout << "To be our best, to pass each test." << endl << endl;

        cout << "So here's to days of books and pens," << endl;
        cout << "To journeys where knowledge transcends." << endl;
        cout << "These years, a precious treasure," << endl;
        cout << "A time of growth, a time of pleasure." << endl << endl;

        cout << "Though exams may come and stress may loom," << endl;
        cout << "We'll face it all, dispel the gloom." << endl;
        cout << "For in these halls, we'll surely find," << endl;
        cout << "The keys to unlock our brilliant mind." << endl << endl;

        cout << "So let's embrace with cheer each new day," << endl;
        cout << "Striving to be the best in every way." << endl;
        cout << "With hope in our hearts and dreams so grand," << endl;
        cout << "Together, we'll conquer, hand in hand." << endl << endl;

        cout << "Back to school, we proudly stand," << endl;
        cout << "In this journey, we'll give our all, understand." << endl;
        cout << "That through each challenge, we'll grow and excel," << endl;
        cout << "In this high school tale, our story to tell." << endl << endl;

        cout << "With each passing day, we'll learn and thrive," << endl;
        cout << "In this high school journey, we'll come alive." << endl;
        cout << "For knowledge is power, with friends by our side," << endl;
        cout << "In these halls of learning, together we'll stride." << endl << endl;

        cout << "So here's to these years, memories to remember," << endl;
        cout << "From January to December, from March to November." << endl;
        cout << "As we grow and evolve, our futures unfold," << endl;
        cout << "In the world beyond, we'll be bold and strong." << endl;
    } else {
        cout << "No worries, wish you a splendid return to class!" << endl;
    }
    return 0;
}
