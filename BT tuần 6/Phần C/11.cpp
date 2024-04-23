
string decToBinary(int n) {
    bitset<32> binary(n);
    return binary.to_string();
}

int binaryToDec(string binary) {
    bitset<32> set(binary);
    return set.to_ulong();
}
z