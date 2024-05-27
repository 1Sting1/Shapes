#include "../shapes.h"
#include <vector>
#include <cmath>

class Polygon : public Shapes {
public:
    Polygon(const std::vector<std::pair<double, double>>& pts) : points(pts) {}

    double area() const override {
        double area = 0.0;
        int j = points.size() - 1;
        for (int i = 0; i < points.size(); i++) {
            area += (points[j].first + points[i].first) * (points[j].second - points[i].second);
            j = i;
        }
        return std::abs(area / 2.0);
    }

    double perimeter() const override {
        double perimeter = 0.0;
        for (size_t i = 0; i < points.size(); ++i) {
            size_t j = (i + 1) % points.size();
            double dx = points[j].first - points[i].first;
            double dy = points[j].second - points[i].second;
            perimeter += std::sqrt(dx * dx + dy * dy);
        }
        return perimeter;
    }

private:
    std::vector<std::pair<double, double>> points;
};
