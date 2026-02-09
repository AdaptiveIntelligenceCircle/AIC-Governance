function Emit_trust_signal(score)
    if score < 0.7 then 
        return "Ethical Veto"
    end 
    return "Trust_OK"
end 