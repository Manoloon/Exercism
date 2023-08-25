//
// Created by Manoloon on 23/8/2023.
//

#ifndef EXERCISM_LARGEST_SERIES_PRODUCT_H
#define EXERCISM_LARGEST_SERIES_PRODUCT_H
namespace largest_series_product {
    unsigned largest_product(std::string series, unsigned series_length) {
         if (series_length == 0) {
            if (series.empty()) {
                return 1;
            } else {
                throw std::domain_error("Series length cannot be zero.");
            }
        }

        if (series.length() < series_length)
        {
            throw std::domain_error("Series length is greater than the length of the series.");
        }
        unsigned maxProduct = std::numeric_limits<unsigned>::min();

        for (int FirstIndex = 0; (FirstIndex <= series.length() - series_length; FirstIndex++)
        {
            size_t product = 1;
            for (int SecondIndex = FirstIndex; SecondIndex < FirstIndex + series_length;
            SecondIndex++)
            {
                if (!isdigit(series[SecondIndex]))
                {
                    throw std::domain_error("Series contains non-digit characters.");
                }

                int digit = series[SecondIndex] - '0';
                product *= digit;
            }
            if (product > maxProduct)
            {
                maxProduct = product;
            }
        }
        return maxProduct;
    }
}
#endif //EXERCISM_LARGEST_SERIES_PRODUCT_H
