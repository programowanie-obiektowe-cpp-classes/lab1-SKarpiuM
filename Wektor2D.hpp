class Wektor2D
{
    // Tutaj napisz implementacje klasy Wektor2D
    // Test czy pushowanie działa
        private:
        double x;
        double y;

    public:

        void setX(double corX) {
           x=corX;
        }

        double getX() {
            return x;
        }

        void setY(double corY) {
           y=corY;
        }

        double getY() {
            return y;
        }

        Wektor2D() {
            setX(0);
            setY(0);
        }
        Wektor2D(double corX, double corY) {
            setX(corX);
            setY(corY);
        }

        Wektor2D operator + (const Wektor2D& obj){
            Wektor2D temp;
            temp.x = x +obj.x;
            temp.y = y+obj.y;
            return temp;
        }

        double operator * (const Wektor2D& obj){
            return x*obj.x + y*obj.y;
        }
};
