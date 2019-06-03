/**
 * Labo 4 : ArrayDeque
 * GROUPE : ASD1_B_A
 * @author Gwendoline Dossegger
 * @author Gabriel Roch
 * @author Quentin Saucy
 */

#ifndef ArrayDeque_hpp
#define ArrayDeque_hpp


#include <vector>

template < class T >
class ArrayDeque
{
    public:
        using value_type = T;
        using reference = T&;
        using const_reference = const T&;
        using size_type = std::size_t;
        using difference_type = std::ptrdiff_t;

    private:
        std::vector<value_type> buffer;
        size_type debut;
        size_type taille;

    private:
        size_type i_physique(size_type i_logique) const
        {
            return (debut + i_logique) % capacity();
        }
        void augmenterTailleSiBesoin()
        {
            if(taille >= capacity())
            {
                std::vector<value_type> newBuffer(empty() ? 1 : capacity() * 2);
                for(size_type i = 0; i < taille; ++i)
                {
                    newBuffer[i] = std::move(buffer[i_physique(i)]);
                }
                using std::swap; swap(buffer, newBuffer);
                debut = 0;
            }
        }
        

    public:
        ArrayDeque(size_type capacity = 0) : buffer(capacity), debut(0), taille(0)
        {
        }

        size_type size() const
        {
            return taille;
        }

        size_type capacity() const
        {
            return buffer.size();
        }

        bool empty() const
        {
            return !taille;
        }

        void push_back(const_reference elem)
        {
            augmenterTailleSiBesoin();

            buffer[i_physique(taille)] = elem;
            ++taille;
        }

        void push_front(const_reference elem)
        {
            augmenterTailleSiBesoin();

            buffer[i_physique(capacity()-1)] = elem;
            debut = i_physique(capacity()-1);
            ++taille;
        }

        void pop_back()
        {
            --taille;
        }

        void pop_front()
        {
            debut = i_physique(1);
            --taille;
        }

        reference back()
        {
            return buffer[i_physique(taille-1)];
        }

        reference front()
        {
            return buffer[debut];
        }

        const_reference back() const
        {
            return buffer[i_physique(taille-1)];
        }

        const_reference front() const
        {
            return buffer[debut];
        }

};

#endif /* ArrayDeque_hpp */
