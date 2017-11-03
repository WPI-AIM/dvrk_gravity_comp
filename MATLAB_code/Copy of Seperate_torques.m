function [coefficients, unknowns] = Seperate_torques()
coefficients = sym('a',1);
coefficients(1) = 0;
unknowns = sym('a',1);
torques = dvrk501mtm_getTorqueEq();
singular_unknowns = symvar(torques);
unknowns_count = 0;
syms x q1 q2 q3 q4 q5 q6 q7;
unknown = x;
cof = torques;
for k = 1:7
    unknown = 1;
    cont = 1;
    cof(2) = torques(k);
    k_is = k
    while cont == 1
        for j = 1:length(singular_unknowns)
            coff = coeffs(cof(2), singular_unknowns(j));
            if length(coff) == 2
                cof = coff;
                unknown = unknown*singular_unknowns(j);
                j = 1;
                if isempty(symvar(subs(cof(2), [q1, q2, q3, q4, q5, q6, q7], [pi/3 pi/3 pi/3 pi/3 pi/3 pi/3 pi/3])))
                    for w = 1:(unknowns_count+1)
                        if w == (unknowns_count+1)
                            unknowns_count = unknowns_count + 1;
                            coefficients(k,unknowns_count) = cof(2);
                            unknowns(unknowns_count) = unknown;
                        elseif unknowns(w) == unknown
                            coefficients(k,w) = cof(2);
                            unknowns(w) = unknown;
                            break;
                        end
                    end
                    torques(k) = torques(k) - cof(2)*unknown;
                    torques(k) = simplify(torques(k))
                    cof(2) = torques(k);
                    unknown = 1;
                end
            else
                if simplify(cof(2)-coff*singular_unknowns(j))==0
                    cof(2) = coff;
                    unknown = unknown*singular_unknowns(j);
                    j = 1;
                    if isempty(symvar(subs(cof(2), [q1, q2, q3, q4, q5, q6, q7], [pi/3 pi/3 pi/3 pi/3 pi/3 pi/3 pi/3])))
                        for w = 1:(unknowns_count+1)
                            if w == (unknowns_count+1)
                                unknowns_count = unknowns_count + 1;
                                coefficients(k,unknowns_count) = cof(2);
                                unknowns(unknowns_count) = unknown;
                            elseif unknowns(w) == unknown
                                coefficients(k,w) = cof(2);
                                unknowns(w) = unknown;
                                break;
                            end
                        end
                        torques(k) = torques(k) - cof(2)*unknown;
                        torques(k) = simplify(torques(k))
                        cof(2) = torques(k);
                        unknown = 1;
                    end
                end
            end
            if torques(k) == 0
                cont = 0;
                break;
            end
        end
    end
end