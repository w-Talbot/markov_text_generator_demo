#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    font.load("franklinGothic.otf", 10);

//    sample_text = "the theremin is theirs,ok? yes, it is. this is a theremin.";
    
    // wikipedia.org/wiki/Black-breasted_buttonquail
    sample_text = "The black-breasted buttonquail was originally described by ornithologist John Gould in 1837 as Hemipodius melanogaster,from specimens collected around Moreton Bay in Queensland.Its specific epithet is derived from the Ancient Greek terms melas black and gaster belly. In 1840 English zoologist George Robert Gray established that the genus name Turnix, coined in 1790 by French naturalist Pierre Joseph Bonnaterre, had priority over Hemipodius, which had been published in 1815 by Coenraad Jacob Temminck. In his 1865 Handbook to the Birds of Australia, Gould used its current name Turnix melanogaster. Gregory Mathews placed it in its own genus Colcloughia in 1913, which was not followed by later authors. He also described a subspecies Colcloughia melanogaster goweri from Gowrie on the basis of less extensive black plumage, though this was later regarded as individual variation.Along with other buttonquails, the black-breasted buttonquail was traditionally placed in the order Gruiformes, but more recent molecular analysis shows it belongs to an early offshoot within the shorebirds (Charadriiformes).Black-breasted buttonquail has been designated the official name by the International Ornithologists' Union (IOU). Black-fronted buttonquail is an alternative vernacular name. Gould called it black-breasted hemipode initially, and then black-breasted turnix, corresponding with its scientific name. The buttonquail species were generally known as quail (hence black-breasted quail or black-fronted quail) until the Royal Australasian Ornithologists Union (RAOU) promoted the current usage of buttonquail in 1978, which was then universally adopted. The Butchulla people, the traditional owners of K'gari (Fraser Island), know the bird as the mur'rindum bird The black-breasted buttonquail is a plump quail-shaped bird with predominantly marbled black, rufous and pale brown plumage, marked prominently with white spots and stripes, white eyes, a grey bill and yellowish feet. The short tail has twelve rectrices and the wings are short with round tips. The length ranges from 17 to 19 cm (6.5 to 7.5 in), with females tending to be larger and heavier, weighing 80–119 g (2.8–4.2 oz), compared to males, which weigh 50–87 g (1.8–3.1 oz). Like other buttonquails, the female is more distinctively coloured than the male. Its head, neck, and breast are black with a chestnut tinge on the nape and rear of its crown, and small white spots on its neck and face forming a moustache and eyebrow-like pattern. The white spots coalesce into bars on its breast, and its underparts are dark grey. The male has a whitish face and neck with black speckles and darker ear coverts, and a brown-grey crown and nape. Its breast has black and white bars and spots, with red-brown on its flanks and more grey with dark barring on the rest of its underparts. The juvenile resembles the adult male though has a blue-grey iris, duller brown-grey upperparts more heavily blotched with black on outer back and scapulars and less pale streaks The female makes a low-pitched oom call – a sequence of 5–7 notes that last 1.5–2.0 seconds each – which can be repeated 14–21 (or less commonly 1–4) times. This advertising call cannot be heard more than 50 m (160 ft) away, and is uttered only after there has been sufficient rainfall of 100 mm (4 in) within a few days. The female whistles quietly to its young.The male makes a range of high staccato and clucking alarm or rallying calls, including an ak ak call when separated from others in its covey. Juveniles have a range of chirping or piping calls to induce feeding or raise an alarm. The black markings and large size of the female and the dark markings and whitish face of the male distinguish the species from the co-occurring painted buttonquail (Turnix varius). The regurgitated globular pellets of the black-breasted buttonquail have a distinctive hook at the end, in contrast to those of the painted buttonquail, which are more cylindrical and gently curved.The black-breasted buttonquail is found from Hervey Bay in central Queensland south to the northeastern corner of New South Wales, generally in areas receiving 770–1,200 mm (30–47 in) rainfall annually. There had been only ten reports from New South Wales in the decade leading up to 2009. Fieldwork across the Wide Bay–Burnett region from 2016 to 2018 found it in scattered locations in its suitable habitat from Teewah Beach to Inskip Point on the mainland and along the east coast of near K'Gari. It is found in Palmgrove National Park, which has been identified by BirdLife International as an Important Bird Area for the species. The black-breasted buttonquail was once populous on Inskip Point, with the area a destination for birdwatchers wanting to see this species. Mike West, former president of Birds Queensland, blamed dingoes and wild dogs for wiping out the population.The bird is rare and its habitat is fragmented. It is found in dry rainforest and nearby areas, as well as bottle tree (Brachychiton rupestris) scrub,lantana thickets, dune scrub, and mature hoop pine (Araucaria cunninghamii) plantations with a closed canopy and developed undergrowth. Many canopy plants such as Acacia species produce abundant leaf litter, which the species forages in. No other buttonquail species lives in its type of habitat.The black-breasted buttonquail is generally ground-dwelling. It has no hind toe and so cannot perch in trees.If startled, it generally freezes or runs rather than flying The usual sex roles are reversed in the buttonquail genus (Turnix), as the larger and more brightly-coloured female mates with multiple male partners and leaves them to incubate the eggs. The breeding habits of the species are not well known as both the birds and their nests are difficult to find and monitor. There are conflicting reports on the duration of the breeding season; field observations by John Young in northern New South Wales indicate this is restricted to between October and March, yet there are other reports of chicks year-round, suggesting opportune breeding can take place at any time. Minimum temperatures in the studied areas in New South Wales can drop to −2 °C (28 °F) in cooler months; reproduction has been known to be inhibited by cold weather in captivity, hence breeding may be related to temperature in this part of its range. For most of the year, the female black-breasted buttonquail forms a covey with one to three males. During breeding season, the female establishes a territory while the males often form small territories within it. Agonistic behaviour between females has been observed but it is unclear how common it is. The female utters drumming calls as courtship, which is answered by clucking from the male.The nest is a shallow depression measuring 10 by 6 cm (4 by 2.5 in) scraped out of the leaf litter and ground, lined with leaves, moss and dried vegetation. It is often sited between the buttress roots of a plant, or in a crevice or sheltered by a tree root, and within or near undergrowth vegetation such as lantana (Lantana camara), bracken (Pteridium esculentum) or prickly rasp fern (Doodia aspera). It is not known which sex builds the nest. Three or four shiny grey-white or buff eggs splotched with dark brown-black and lavender are laid measuring 28 by 23 mm (1.10 by 0.91 in). Incubation lasts 18 to 21 days. The hatchlings are precocial and nidifugous, and are able to forage and eat by 8–11 days of age, though parents may feed them for two weeks. By 8–12 weeks, they gain adult plumage and are able to breed at three to five months old The black-breasted buttonquail forages on the ground in large areas of thick leaf litter in vine forest, and thickets of vines or lantana. Leaves fall on these areas year-round, with litter layers 3–10 cm (1–4 in) thick being preferred. A covey of birds scrapes out up to a hundred plate-shaped shallow feeding sites, though ten to forty is more usual. The buttonquail makes these by scratching at the ground with alternate legs in a circular pattern moving either clockwise or counterclockwise, creating the 20 cm (8 in) depression and pecking for invertebrates in the exposed ground. A 1995 study recovered the exoskeletons of ants, beetles (including weevils), spiders such as jumping spiders and the brown trapdoor spider (Euoplos variabilis), centipedes, millipedes, and snails such as Nitor pudibunda from pellets; the remains of soft-bodied invertebrates were not discernible. A 2018 analysis of faecal pellets revealed beetles, ants and earwigs to be prominent, though the authors concluded the black-breasted buttonquail is a generalist insectivore. Plant material was scant, though this might have been an artefact due to its greater digestibility The species is classified as vulnerable on the International Union for Conservation of Nature's Red List. It is listed as vulnerable by the Australian Government under the Environment Protection and Biodiversity Conservation Act 1999. On a state level, it is listed as ‘Vulnerable’ under the Queensland Nature Conservation Act 1992 and ‘Endangered’ under the New South Wales Threatened Species Conservation Act 1995.The population has been estimated at as few as 2500 breeding birds and declining, with no single population containing more than 250 individuals. The dry rainforest it lives in, although often adjacent to wet rainforest, is often located outside of national parks and protected areas and is thus at risk from further clearance for agriculture or development. Since European settlement, 90% of its habitat has been lost and much of what is left is fragmented. Furthermore, fieldwork in southeast Queensland showed that it did not forage in remnants under 7 ha (17 acres) in area. On the mainland, they are also at risk from feral animals such as cats, foxes and pigs, as well as humans, and weeds. As of 2021, the Butchulla Land and Sea Rangers are collaborating with researchers on a three-year project aimed at reducing threats to the bird and improving its habitat to ensure survival into the future. In August 2021 they set up 19 cameras on K'gari and five at Inskip Point and Double Island Point, leaving them in place for seven weeks. They saw evidence of damage from feral animals on the mainland, but also saw baby birds, and much evidence of the birds at Rainbow Beach and Inskip Point on the mainland, and Dilli Village and Champagne Pools on the island. They are setting pig and cat traps and managing weeds in the area, and will be doing traditional burns in the winter to manage the risk of bushfire on the island";
    
    order = 3;
    
    
    for(int i = 0; i <= sample_text.length() - order; i++){
        string gram = sample_text.substr(i, 3);
        
        
        bool ngram_exists = true;
        if(ngrams.empty()){
            ng.ngram_text = gram;
            ng.number_of_instances = 1;
            
            string next_text_val = sample_text.substr(i + 3, 1);
            ng.next_character.push_back(next_text_val);
            ngrams.push_back(ng);
            continue;
        }else{
            for(int n = 0; n < ngrams.size(); n++){
                
                if(ngrams[n].ngram_text == gram){
                    ngrams[n].number_of_instances += 1;
                    
                    string next_text_val = sample_text.substr(i + 3, 1);
                    ngrams[n].next_character.push_back(next_text_val);
                    ngram_exists = true;
                    break;
                }else {
                    ngram_exists = false;
                }
            }
            if(!ngram_exists){
                ng.ngram_text = gram;
                ng.number_of_instances = 1;
                
                string next_text_val = sample_text.substr(i + 3, 1);
                ng.next_character.push_back(next_text_val);
                ngrams.push_back(ng);
            }
            ng.next_character.clear();
        }
    
    }
    

    
}
//--------------------------------------------------------------
string ofApp::markovRun(){

    string currentGram = sample_text.substr(0,order);
    
    string result;
    result = currentGram;
    
   
    
    for(int i = 0; i < 100; i++){
        
        
        for(int n = 0; n < ngrams.size(); n++){
            if(currentGram == ngrams[n].ngram_text){
                int rand = ofRandom(ngrams[n].number_of_instances);
                result += ngrams[n].next_character[rand];
                currentGram = result.substr(result.length() - 3,3);
            
            }
            
        }
        if(i == 25 || i == 50 || i == 75){
            result += "\n";
        }
    }
    
    
    
    std::cout << result << endl;
    return result;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    font.drawString("Press 'M' to run: ", 100, 100);
    font.drawString(markov_result, 50, 200);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    if(key=='m'){
         markov_result = markovRun();
    
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
