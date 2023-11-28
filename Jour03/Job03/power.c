int Power(int num, int power) {
    int result = 1;
    for (int i = 0; i < power; i++) {
        result *= num;
    }
    return result;
}