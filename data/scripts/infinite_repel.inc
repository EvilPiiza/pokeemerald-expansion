InfiniteRepel::
    lockall
    multichoicedefault 0, 0, MULTI_YESNO, 0, 1
    switch VAR_RESULT
    case 0, TP_Yes
    case 1, TP_NO
    release
    end

TP_Yes::
    special SetCB2WhiteOut
    waitstate
    release
    end

TP_NO:: 
    release
    end