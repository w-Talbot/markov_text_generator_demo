#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    string sample_text = "the theremin is theirs,ok? yes, it is. this is a theremin.";
    int order = 3;
    
    
    for(int i = 0; i <= sample_text.length() - order; i++){
        string gram = sample_text.substr(i, 3);
        
        bool ngram_exists = true;
        if(ngrams.empty()){
            ng.ngram_text = gram;
            ng.number_of_instances = 1;
            ngrams.push_back(ng);
            continue;
        }else{
            for(int n = 0; n < ngrams.size(); n++){
                
                if(ngrams[n].ngram_text == gram){
                    ngrams[n].number_of_instances += 1;
                    ngram_exists = true;
                    break;
                }else {
                    ngram_exists = false;
                }
            }
            if(!ngram_exists){
                ng.ngram_text = gram;
                ng.number_of_instances = 1;
                ngrams.push_back(ng);
            }
        }
    
    }
    
    for(int n = 0; n < ngrams.size(); n++){
        std::cout << ngrams[n].ngram_text << endl;
        std::cout << ngrams[n].number_of_instances << endl;
    }

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
