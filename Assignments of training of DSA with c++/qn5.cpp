#include <iostream>
using namespace std;

int main() {
    float costPricePerDozen, sellingPricePerDozen;
    float costPricePerBanana, sellingPricePerBanana;
    float totalCost, totalSelling, profitOrLoss;

    cout << "Enter Cost Price per dozen bananas: ";
    cin >> costPricePerDozen;

    cout << "Enter Selling Price per dozen bananas: ";
    cin >> sellingPricePerDozen;

   
    costPricePerBanana = costPricePerDozen / 12;
    sellingPricePerBanana = sellingPricePerDozen / 12;

    totalCost = costPricePerBanana * 25;
    totalSelling = sellingPricePerBanana * 25;
    profitOrLoss = totalSelling - totalCost;

    if (profitOrLoss > 0) {
        cout << "Profit earned on selling 25 bananas is: " << profitOrLoss << endl;
    } else if (profitOrLoss < 0) {
        cout << "Loss incurred on selling 25 bananas is: " << -profitOrLoss << endl;
    } else {
        cout << "No profit, no loss on selling 25 bananas." << endl;
    }

    return 0;
}
