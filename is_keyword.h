//
// Created by fkeyz on 06/02/2025.
//

#ifndef IS_KEYWORD_H
#define IS_KEYWORD_H

template <typename Derived, typename Base>
bool operator %(Derived& obj, Base*) {
    return dynamic_cast<Base*>(&obj) != nullptr;
}

// Use a unique name for the macro that doesn't conflict with variable names
#define is_operator %  // Macro to represent the operator `%`
#define s(Type)((Type*)nullptr)

// Define the `is` macro to act as shorthand for `is_operator s`
#define is is_operator s

#endif //IS_KEYWORD_H
