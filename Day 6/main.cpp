#include <fstream>
#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int distinct(string str) {
    unordered_set<char> set;
    for (int i = 0; i < str.size(); i++) set.insert(str[i]);
    return set.size();
}

auto main() -> int {
    string stream = "bvsvcsssfwwdttzpzqqnjjmbbmpbmpmffnttjllzbblvlvqllcwwqpwwhcclqqhmhbhlbbmtmdmgmpggcmcnmcmfcfddvmmcncrcncbbtssdnnhmmfmfrmrbbzllgtllfnnwhwtwzwjjrsrgsrsbbnjjbhjbbjpplslrssdwswrrcsszpplpfplflnnvdvmvjmmgpghphlhphnhffgqgfgzgddstdsdjjgqglqggtgvgrrgtrtllrvrmmnggftgtdtrttgqttcrcqqjqcqwccdzdldrdbbbmrbbnmmwrmmbcchnhmhchddhpphdhzhbbnvbbtctwcwbcwcfclcwwzvwvddbsdsfftgtqggjllwjwppmvvswsjwsscdcrrbggqzqqbhhjwhjwjtjvttpnpdplljplpqpzqzrqrmqmvvsvrvppfgfzfqffvsfvfcvcddjcddzssgfgtffhtfhthntnvvzhzwhzhbbnvvbtbqtqcqnqwnnvpvwwcqcgqqwrwlwbwrbbjcbbqqpddtbddcldccddjssvnvlnnmggmbbchcdcqqdsdqsdqdvdpvvvbzvbvrrjdrjrbjbrbttqzttmffwcfcnnbjnbbjmmgtmgmgdgdpgdglgzzvnzzztjjwbwvvhbhwbbnbhbddwcwvcvjcvjjnnjqjqjzqjjbgbmbjjnqnqddgfgwfgwfftntvnvtvhvlvslsffhvvwnnhshchmmlwmmwvvnhnggzllphllbqqtgqqffhwwnwzztnzttftptnppdpjdjwdwhdddgqglqldqdzzslsggstsrrcsrcclqqrsqrqjqhhjwjggrjgjnjtjwtwjtjrrvnnbddzqzzfnnbvvmfvmvwvggmsgsrggcjjtftpfflzfzccdgcgzcgzcggrbgbngnpnfngfnfqqfzfbfsbfsslqsstvvfmvfvrrvdrddrlrjlrrngrrgfgvgdggnttqqjbjwbwwchhddpmmcvcppjttbzbrzrdzztgtrrchhhbnnqfnfjnnpncnbnvnfnwwsllvrvddhwdwndnjdjbjttmggfvggjhghrhggczgzttbnttjmmdhdrrnnmppwtwdtdbtdbdffpqplqqfbffjssllmwmnmffcnczzrnznzmmwcmwwpbpcbbfdfrrznnzwnnmjnngmngmgpgrppnhnjhhjnhjhfhbffcfhccvzccnrrsggtjtdtjjqqdmqqcggmzzrhzrrbnnlqqtlqtqhhcffrpffgcfgcgncgnggjgzgvzvtztctmtgmmfwwttrntrtqtptzpzjpjqjffpvffvdfvvjhhggfhfrhrwhhwshsnhshbbjzbjzzlvlfvffmrfffngfgpglgjjsbbvzzjsjvsslgsgsfggwjgjlgjgsjgsstvstvstsffdqdpqddrsrmmjbbqbffzbzjjvzvrvcvhhsjsrrmccgqqjnnplnnrprhppslsqszzpvzvggsqscqqbwqqccsdsswqswwqcqzqddbhhmggswggzllccwvwjjpqqrpplrprgrllfwfmwmhhcmmnppfffvtffndnsdnsnbsnsgnsncnzzwrrqrwwzhzbzbnbqbjjrhhjjjbcjjffmwffjnfjfbbjtbbjhjvhvshvhwvwhvwvwfwwwfvvlddqnnlttqssnpsprpwwttlwtwrwfflggvjggwswgwgtgccdjdtdldrdcdsspjpvjpvvfttjrjdrrjppddbdvdjdwdvdssrhsszsjzzfccmwcwzzlnljlppjdjsdjdhdttrdtdtvddslsmmjnmmhzmhhmwmvmcvclvlnndtdrrfdrfrvfvsfvsszfsfdsfdsfsnsdsnsbsddsdwwzbbfqqhrhmrmzmhzhbbpptptffvtvhhwqqtgtdthhrqrrvttprtprrbcblsmbwqqpffmwnqmrdwvjszzhhhffpqsphcgqhlmsgnmmjsdhbfjscztgfvhnlbcmccrfcbnrwcpvgzztvpjdplmncrbvpzwtdnpfwcpvcbzvbtpqmgztsblnchzlphtzgfqcwnrbpcdhbcgzsbgdmbhhrsjqcngfddwvwvldbftgccbjzrrqjcnhbdfgmpdhdgfqzmnpmjgtgwvqlbwgjzjppgmcjzrfzgnbjjbvmshllzjppscwjzjqnbvrppzlshfvtvnpwljrghhwdhfgtcrstnqtqdzfhvgbrrzfdwgtjpjccwrphsdrsjlrlbnrtdbnhpdtshmqlpjqjdlwvrrflwqhcmnsrmcdnfcnwwqmdjlqmqvpgggrjrvfwtwnmhrgzztvmnqczvgmvpcldgfwmtmnsvdshrjmtsgfstjllmqqmpttfhjnsjflcmnpqtqnvtpbgjjhlwqzmrgrbvcsjvprbtqdrnvrgfjdrlhdjsvhhzvllzgfbdwbtqbqzpllpcmcdrfmrsfnwvvmhcqjblnczltcmmmbqwpztqmdpprwphfwgwnsvnzsldnvbsbcdprnztpbmlfzcwpdvcwbsdflrcvsqlswctvlpvshqpwvtcjbtfnmgwtgsvtqhqdzzfhwznggpsmsmzlzrzqcdbqcnhpwhjbhvnqrcwnvpspwqmsqhdbchgrfcmznchwvftgvbldnvtpgmthbmpvccqwbjnjpzhrstscncsrdzsptzvlzjwnpzshmzbhrhgmnwmjmzvvvbgdjshgnqcmdmjrnhqzwtzpjvdczqzccvpvpqnftvpcwgzrzmmnhjnphfntbgjnscwqjcgfcrhjdsjbqfgzhsftghwwwvjwmhfhbwrwmnfrhcggcrjtjsqndrgsbvddqtwhctltzswmtsgwjgsbvvsvzfhbptjqbvbblzhcmnpcjpgzfhstsnlfvmqbdjhszhwhbqztvfdhnbnmppwvzjpnrhtbgthrdprjpqwpthqwzdnhpngflcmhnrmsbdlfwhjbfgrhfzspmfvvtqrwldzvblbtlwqfgfflvmvthbvdzzbtmmpzchgmldmgnhrfhhjwstbqqrzhmqsbqhjzdmjmllmjgqhhjghgsvrbmrbfjdzghmwpszfmslfwcjrftbqjgbbzddtvjmsgwmhhdzwtwvrgqctvwbwjqvssdvfprjsdgsgwbfmzwzmbnlzbfdqvwbrzpgvngqhfqzfqqsvmtgvsqwrplhfnsqhtvtbbqmpbjlcsfjgngwrztlrjbmcjddjsnbgcpnhdtngzhzvhzpjfcblhglhzfsjdgjdqvvppfrdftfbfldwqjznvrdqdnfscgvhztjwlqgqbjmlsbcrldjhnrsfgthlhplvwgmdnplrtpdvrqbpvnbpzfzwlvrrscvmgzhlcdwglwwrgzqsjqsqfblqljltbvvjwbpmfqjvldspgsbjrdbbwzjntlpqgvdjfvsjznczsppzwfvblffqqhwmhzdzztbvbsjhvjtjrptrdvrbbpnpncltqnhdvwjgzcmdtnbnhlmptjsqlzlpztnrtclgsmgvrvggtzfhpwgjgwtrnshmcpvhprpnrvgprspmwhchlhhsvwpvjdmjrlnjdchngrdgpwzsgqsjnqnqwsctzvsmqgvrpffffcfshbhmqbffwvcjqscrwhbfflwslspwjgdbvcgbtwldzffrdhrlbssjbcsjgbhprgspnjdbmnshzqwdvtnzsrfwbqfrgnlmpvqrrmmmcshzltqbwffprbwqbfthtvszqzcbbljtfjqmwpqssjtdpqlrfmpchrqmdpbsdjcdmglnlgnwvhclqfmbwhtljmscnzzqtwtjqsqrmmnssmqhqjvdlpmstmpwmrcfjbjrchrgvqqzbvtzpcbdvchvghnflllqddlttjwtnfhgqjjgtgsnhpvnwhcbljstshmhpwbqthvngqzrmqpmwqnvrfblpjlqgczfmtwvmlbzslqwdzhfccmrvjwfnwzgpbvgdgttdgtjdlvrmpbdhwjsvvsjqpclrnbtzphvmpfqhhqdmbmqzwphnzzfqjsqvdvbvnpmtnzpdsfzmbttssnssrtpmpvgrrzvcljtqtrqnfmmtsnvtrsjgcmqnttcmp";
    string marker;
    int count = 0;

    for (char character : stream) {
        count++;
        marker += character;    
        if (marker.length() > 4) marker.erase(0, 1);
        if (distinct(marker) == 4) {
            cout << count << endl;
            break;
        }
    }

    for (char character : stream) {
        count++;
        marker += character;    
        if (marker.length() > 14) marker.erase(0, 1);
        if (distinct(marker) == 14) {
            cout << count << endl;
            break;
        }
    }
}
