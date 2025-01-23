#include "compiler.h"
#include "lexer.h"
#include "ir_debug.h"

struct StatementNode* parse_generate_intermediate_representation();
struct StatementNode* body_statement();
LexicalAnalyzer lexer;
struct ValueNode* arr[100];
int i = 0;
struct StatementNode* body_statement(){
    
}
struct StatementNode* parse_generate_intermediate_representation(){
    struct StatementNode* result;
    Token t = lexer.GetToken();
    while(t.token_type != SEMICOLON){
        arr[i] = new ValueNode{};
        arr[i]->value = 0;
        arr[i]->name = t.lexeme;
        i++;
        t = lexer.GetToken();
    }
    result = body_statement();
    return result
}