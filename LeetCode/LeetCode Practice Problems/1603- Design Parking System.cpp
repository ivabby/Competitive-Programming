class ParkingSystem {
public:
    int c[3]; 
    ParkingSystem(int big, int medium, int small) {
        c[0] = big;
        c[1] = medium;
        c[2] = small;
    }
    
    bool addCar(int carType) {
        if(c[carType-1] == 0) {
            return false;
        }
        
        c[carType-1]--;
        return true;
    }
};
