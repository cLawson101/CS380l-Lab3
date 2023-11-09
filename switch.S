# arguments put into rdi, rsi
# callee save registers are: rbx, rbp, r12 - 15

.global switchToUser
switchToUser:
    mov %rdi, %rbx # entry
    mov %rsi, %rbp # user stack
    
    mov %rbp, %rsp
    push %rbx

    # clear (minus rsp)
    mov $0, %rax
    mov $0, %rbx
    mov $0, %rcx
    mov $0, %rdx
    mov $0, %rsi
    mov $0, %rdi
    mov $0, %rbp
    mov $0, %r8
    mov $0, %r9
    mov $0, %r10
    mov $0, %r11
    mov $0, %r12
    mov $0, %r13
    mov $0, %r14
    mov $0, %r15

    ret