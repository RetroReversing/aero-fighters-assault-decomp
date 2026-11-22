s32 func_80247490(Thread* thread) {
    if (thread == 0) {
        thread = (Thread*)D_802516E0;
    }
    return thread->pri;
}
