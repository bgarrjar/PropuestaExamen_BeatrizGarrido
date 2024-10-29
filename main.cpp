#include <iostream>
#include <vector>
#include <tuple>
#include "funcion/funcion.h"

int main() {

    TriplePitagorico pitagorico(17);

    std::vector<std::tuple<int, int, int>> triples = pitagorico.encontrarTriples();

    for (const auto& triple : triples) {
        std::cout << "Triple pitagorico: "
                  << std::get<0>(triple) << " - "
                  << std::get<1>(triple) << " - "
                  << std::get<2>(triple) << std::endl;
    }

    return 0;
}

