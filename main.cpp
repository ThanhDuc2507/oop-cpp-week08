#include <iostream>
#include <string>
using namespace std;

struct Mobile {
    string id;
    string name;
    string brand;
    double price;
};

struct Order {
    string id;
    string customerName;
    string mobileId;
    int quantity;
    int month;
    double total;
};

struct Shop {
    string shopName;
    string address;
    string phone;

    Mobile mobiles[100];
    int mobileCount;

    Order orders[100];
    int orderCount;

    void inputShopInfo() {
        cout << "Nhap ten shop: ";
        getline(cin, shopName);

        cout << "Nhap dia chi: ";
        getline(cin, address);

        cout << "Nhap so dien thoai shop: ";
        getline(cin, phone);

        mobileCount = 0;
        orderCount = 0;
    }

    void displayMobiles() {
        if (mobileCount == 0) {
            cout << "Chua co dien thoai nao.\n";
            return;
        }

        cout << "\n===== DANH SACH DIEN THOAI =====\n";

        for (int i = 0; i < mobileCount; i++) {
            cout << "ID: " << mobiles[i].id << endl;
            cout << "Ten: " << mobiles[i].name << endl;
            cout << "Hang: " << mobiles[i].brand << endl;
            cout << "Gia: " << mobiles[i].price << endl;
            cout << "--------------------------\n";
        }
    }

    void addMobile() {
        cout << "\n===== THEM DIEN THOAI =====\n";

        cout << "Nhap ID: ";
        cin >> mobiles[mobileCount].id;
        cin.ignore();

        cout << "Nhap ten dien thoai: ";
        getline(cin, mobiles[mobileCount].name);

        cout << "Nhap hang: ";
        getline(cin, mobiles[mobileCount].brand);

        cout << "Nhap gia: ";
        cin >> mobiles[mobileCount].price;

        mobileCount++;

        cout << "Them dien thoai thanh cong!\n";
    }

    void deleteMobile() {
        string id;

        cout << "\n===== XOA DIEN THOAI =====\n";
        cout << "Nhap ID dien thoai can xoa: ";
        cin >> id;

        int pos = -1;

        for (int i = 0; i < mobileCount; i++) {
            if (mobiles[i].id == id) {
                pos = i;
                break;
            }
        }

        if (pos == -1) {
            cout << "Khong tim thay dien thoai!\n";
            return;
        }

        for (int i = pos; i < mobileCount - 1; i++) {
            mobiles[i] = mobiles[i + 1];
        }

        mobileCount--;

        cout << "Xoa dien thoai thanh cong!\n";
    }

    int findMobile(string id) {
        for (int i = 0; i < mobileCount; i++) {
            if (mobiles[i].id == id) {
                return i;
            }
        }

        return -1;
    }

    int findOrder(string id) {
        for (int i = 0; i < orderCount; i++) {
            if (orders[i].id == id) {
                return i;
            }
        }

        return -1;
    }

    void createOrder() {
        cout << "\n===== TAO DON HANG =====\n";

        cout << "Nhap ma don hang: ";
        cin >> orders[orderCount].id;

        if (findOrder(orders[orderCount].id) != -1) {
            cout << "Ma don hang da ton tai!\n";
            return;
        }

        cin.ignore();

        cout << "Nhap ten khach hang: ";
        getline(cin, orders[orderCount].customerName);

        cout << "Nhap ID dien thoai: ";
        cin >> orders[orderCount].mobileId;

        int mobilePos = findMobile(orders[orderCount].mobileId);

        if (mobilePos == -1) {
            cout << "Khong tim thay dien thoai!\n";
            return;
        }

        cout << "Nhap so luong: ";
        cin >> orders[orderCount].quantity;

        cout << "Nhap thang: ";
        cin >> orders[orderCount].month;

        orders[orderCount].total =
            mobiles[mobilePos].price * orders[orderCount].quantity;

        orderCount++;

        cout << "Tao don hang thanh cong!\n";
    }

    void editOrder() {
        string id;

        cout << "\n===== CHINH SUA DON HANG =====\n";
        cout << "Nhap ma don hang: ";
        cin >> id;

        int pos = findOrder(id);

        if (pos == -1) {
            cout << "Khong tim thay don hang!\n";
            return;
        }

        cin.ignore();

        cout << "Nhap ten khach hang moi: ";
        getline(cin, orders[pos].customerName);

        cout << "Nhap ID dien thoai moi: ";
        cin >> orders[pos].mobileId;

        int mobilePos = findMobile(orders[pos].mobileId);

        if (mobilePos == -1) {
            cout << "Khong tim thay dien thoai!\n";
            return;
        }

        cout << "Nhap so luong moi: ";
        cin >> orders[pos].quantity;

        cout << "Nhap thang moi: ";
        cin >> orders[pos].month;

        orders[pos].total =
            mobiles[mobilePos].price * orders[pos].quantity;

        cout << "Chinh sua don hang thanh cong!\n";
    }

    void statisticByMonth() {
        int month;

        cout << "\n===== THONG KE DON HANG THEO THANG =====\n";
        cout << "Nhap thang can thong ke: ";
        cin >> month;

        int count = 0;
        double revenue = 0;

        for (int i = 0; i < orderCount; i++) {
            if (orders[i].month == month) {
                count++;
                revenue += orders[i].total;
            }
        }

        cout << "\nThang: " << month << endl;
        cout << "So luong don hang: " << count << endl;
        cout << "Tong doanh thu: " << revenue << endl;
    }
};

int main() {
    Shop shop;

    shop.inputShopInfo();

    int choice;

    do {
        cout << "\n========== SHOP BAN DIEN THOAI ==========\n";
        cout << "1. Them dien thoai\n";
        cout << "2. Xoa dien thoai\n";
        cout << "3. Tao don hang\n";
        cout << "4. Chinh sua don hang\n";
        cout << "5. Thong ke don hang theo thang\n";
        cout << "6. Hien thi danh sach dien thoai\n";
        cout << "0. Thoat\n";
        cout << "==========================================\n";
        cout << "Nhap lua chon: ";
        cin >> choice;

        switch (choice) {
            case 1:
                shop.addMobile();
                break;

            case 2:
                shop.deleteMobile();
                break;

            case 3:
                shop.createOrder();
                break;

            case 4:
                shop.editOrder();
                break;

            case 5:
                shop.statisticByMonth();
                break;

            case 6:
                shop.displayMobiles();
                break;

            case 0:
                cout << "Ket thuc chuong trinh.\n";
                break;

            default:
                cout << "Lua chon khong hop le!\n";
        }

    } while (choice != 0);

    return 0;
}