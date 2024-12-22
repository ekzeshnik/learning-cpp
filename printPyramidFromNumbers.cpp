int printPyramidFromNumbers() {
    int pyramidHeight;

    std::cout << "Enter pyramid height: ";
    std::cin >> pyramidHeight;

    if (pyramidHeight > 0)
        for (int changingPyramidHeight = pyramidHeight; changingPyramidHeight > 0; changingPyramidHeight--) {
            for (int pyramidNumbers = 1; pyramidNumbers <= changingPyramidHeight; pyramidNumbers++) {
                std::cout << pyramidNumbers << " ";
            }
            std::cout << std::endl;
        }

    else if (pyramidHeight < 0) {
        for (int changingPyramidHeight = -pyramidHeight; changingPyramidHeight > 0; changingPyramidHeight--) {
            for (int pyramidNumbers = 1; pyramidNumbers <= changingPyramidHeight; pyramidNumbers++) {
                std::cout << pyramidNumbers << " ";
            }
            std::cout << std::endl;
        }

        std::cout << '0' << std::endl;

        for (int changingPyramidHeight = -1; changingPyramidHeight >= pyramidHeight; changingPyramidHeight--) {
            for (int pyramidNumbers = -1; pyramidNumbers >= changingPyramidHeight; pyramidNumbers--) {
                std::cout << pyramidNumbers << " ";
            }
            std::cout << std::endl;
        }
    }

    return 0;
}

int main()
{
    printPyramidFromNumbers();
}
